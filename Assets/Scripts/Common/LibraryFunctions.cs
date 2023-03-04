using System.Collections;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;

namespace Tank2DLibraryFunctions
{
    public static class LibraryFunctions
    {
        public static bool IsZero(this float value) => !(Mathf.Abs(value) > 0.0f);
        public static bool IsZero(this Vector2 vector) => vector.sqrMagnitude < 9.99999943962493E-11;
        public static bool IsZero(this Vector3 vector) => vector.sqrMagnitude < 9.99999943962493E-11;     
        public static Vector2 xy(this Vector3 v) => new Vector2(v.x, v.y);       
        public static Vector3 WithX(this Vector3 vector3, float x) => new Vector3(x, vector3.y, vector3.z);     
        public static Vector3 WithY(this Vector3 vector3, float y) => new Vector3(vector3.x, y, vector3.z);
        public static Vector2 WithX(this Vector2 vector3, float x) => new Vector2(x, vector3.y);
        public static Vector2 WithY(this Vector2 vector3, float y) => new Vector2(vector3.x, y);
        public static bool IsExceeding(this Vector2 vector, float magnitude)
        {
            const float errorTolerance = 1.01f;
            return vector.sqrMagnitude > (magnitude * magnitude) * errorTolerance;
        }
        public static bool IsExceeding(this Vector3 vector, float magnitude)
        {
            const float errorTolerance = 1.01f;
            return vector.sqrMagnitude > (magnitude * magnitude) * errorTolerance;
        }  
        public static bool IsNaN(this Vector2 vector) => float.IsNaN(vector.x) || float.IsNaN(vector.y);   
        public static bool IsNaN(this Vector3 vector) => float.IsNaN(vector.x) || float.IsNaN(vector.y) || float.IsNaN(vector.z);
        public static Quaternion SmoothDamp(Quaternion rot, Quaternion target, ref Quaternion deriv, float time) 
        {
            if (Time.deltaTime < Mathf.Epsilon) return rot;
            
            // account for double-cover
            var dot = Quaternion.Dot(rot, target);
            var multi = dot > 0f ? 1f : -1f;
            target.x *= multi;
            target.y *= multi;
            target.z *= multi;
            target.w *= multi;
            
            // smooth damp (nlerp approx)
            var result = new Vector4(
                Mathf.SmoothDamp(rot.x, target.x, ref deriv.x, time),
                Mathf.SmoothDamp(rot.y, target.y, ref deriv.y, time),
                Mathf.SmoothDamp(rot.z, target.z, ref deriv.z, time),
                Mathf.SmoothDamp(rot.w, target.w, ref deriv.w, time)
            ).normalized;
		
            // ensure deriv is tangent
            var derivError = Vector4.Project(new Vector4(deriv.x, deriv.y, deriv.z, deriv.w), result);
            deriv.x -= derivError.x;
            deriv.y -= derivError.y;
            deriv.z -= derivError.z;
            deriv.w -= derivError.w;		
		
            return new Quaternion(result.x, result.y, result.z, result.w);
        }
    }
}

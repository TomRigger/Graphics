#ifndef MATHS_H
#define MATHS_H

#ifndef NULL
#define NULL 0
#endif

#ifndef PI
#define PI 3.1415926f
#endif

inline float sqr(float n) {
	return n * n; }

struct vector {
        float i, j, k; 

        vector();
        vector(const vector& v);
        vector(float i, float j, float k);
        vector(float f);

        virtual ~vector();

        inline float length2();
        inline float length();

        float normalize();
        vector normalized();

        vector& operator =(const vector& v);
        vector& operator +=(const vector& v);
        vector& operator -=(const vector& v);
        vector& operator *=(float f);
        vector& operator /=(float f);
        vector operator -() const;
    };

float dot(vector v1, vector v2);
vector cross(vector v1, vector v2);

inline vector operator +(const vector& v1, const vector& v2)	{	return vector(v1.i + v2.i, v1.j + v2.j, v1.k + v2.k);	}

inline vector operator -(const vector& v1, const vector& v2)	{	return vector(v1.i - v2.i, v1.j - v2.j, v1.k - v2.k);	}

inline vector operator *(const vector& v1, const vector& v2)	{	return vector(v1.i * v2.i, v1.j * v2.j, v1.k * v2.k);	}

inline vector operator *(const vector& v, float f)	{	return vector(v.i * f, v.j * f, v.k * f);	}

inline vector operator *(float f, const vector& v)	{	return vector(f * v.i, f * v.j, f * v.k);	}

inline vector operator /(const vector& v1, const vector& v2)	{	return vector(v1.i / v2.i, v1.j / v2.j, v1.k / v2.k);	}

inline vector operator /(const vector& v, float f)	{	return vector(v.i / f, v.j / f, v.k / f);	}

inline vector operator /(float f, const vector& v)	{	return vector(f / v.i, f / v.j, f / v.k);	}

typedef vector Point;

struct vector2	{
        float u, v;

        vector2();
        vector2(const vector2& v);
        vector2(float u, float v);
        vector2(float f);

        virtual ~vector2();

        vector2& operator =(const vector2& v);
    };

#endif // MATHS_H

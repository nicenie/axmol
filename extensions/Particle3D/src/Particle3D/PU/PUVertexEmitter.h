/****************************************************************************
 Copyright (C) 2013 Henry van Merode. All rights reserved.
 Copyright (c) 2015-2016 Chukong Technologies Inc.
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 https://axmol.dev/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __AX_PU_PARTICLE_3D_VERTEX_EMITTER_H__
#define __AX_PU_PARTICLE_3D_VERTEX_EMITTER_H__

#include "Particle3D/PU/PUEmitter.h"
#include <list>

// Particle3DVertexEmitter NOT SUPPORT YET
namespace ax
{
//
// class  Particle3DVertexEmitter : public PUEmitter
//{
// protected:
//
//	std::list<Vec3> mSpawnPositionList;
//	const Ogre::VertexElement* mPositionElement;
//	Ogre::VertexData* mVertexData;
//	Ogre::HardwareVertexBufferSharedPtr mBuffer;
//	unsigned char* mVertexBuffer;
//	Ogre::Mesh* mMesh;
//	Ogre::SubMesh* mSubMesh;
//	bool mMeshProcessed;
//	size_t mVertexSize;
//	size_t mMaxVertexCount;
//	size_t mVertexCount;
//	unsigned short mSubMeshNumber;
//	bool mAllVerticesProcessed;
//
//	/** Determines the size of the steps that are used to traverse through the vertices.
//	*/
//	unsigned short mStep;
//
//	/** Determines in how many segments an edge is divided. This results in spawn points.
//	*/
//	unsigned short mSegments;
//
//	/** Defines the speed of generating spawnpoints. In each Particle Technique update
//		'mIterations' vertices are traversed.
//	@remarks
//		Setting this attribute to a higher value is needed if the emission rate of the emitter
//		is high. On slower computers, emitting the particles may exceed generating the
//		spawnpoints (because this is not done at once, but per Particle Technique update).
//	*/
//	unsigned short mIterations;
//
//	/** Determines the name of the mesh of which the vertices are used.
//	*/
//	std::string mMeshName;
//
//	/** The _preProcessParticles() function is used to generate some spawn points in every update.
//	*/
//	virtual void _preProcessParticles(ParticleTechnique* technique, float timeElapsed);
//
//	/**
//	*/
//	void _setDefaults();
//
//	/**
//	*/
//	void _loadMesh ();
//
//	/** Generate spawn points from a mesh. The points will not be generated all at once, but
//		gradually. In each call, the points on an edge are generated, until all vertices
//		have been processed. In that case, mAllVerticesProcessed is set to true and this
//		function stops further processing.
//	*/
//	void _generatePoints ();
//
//	/**
//	*/
//	void _generatePointsFromMesh ();
//
//	/**
//	*/
//	void _generatePointsFromSubMesh ();
//
//	/**
//	*/
//	void _fillVertexBuffer();
//
//	/**
//	*/
//	void _generatePointsFromVertexBuffer();
//
//	/**
//	*/
//	void _generatePoints (const Vec3& startVector,
//		const Vec3& endVector,
//		float lengthIncrement = 0.0f);
//
// public:
//	// Constants
//	static const unsigned short DEFAULT_STEP;
//	static const unsigned short DEFAULT_SEGMENTS;
//	static const unsigned short DEFAULT_ITERATIONS;
//
//	Particle3DVertexEmitter();
//	virtual ~Particle3DVertexEmitter() {};
//
//	/**
//	*/
//	unsigned short getIterations() const;
//
//	/**
//	*/
//	void setIterations(unsigned short iterations);
//
//	/**
//	*/
//	unsigned short getSegments() const;
//
//	/**
//	*/
//	void setSegments(unsigned short segments);
//
//	/**
//	*/
//	unsigned short getStep() const;
//
//	/**
//	*/
//	void setStep(unsigned short step);
//
//	/**
//	*/
//	std::string_view getMeshName() const;
//
//	/**
//	*/
//	virtual void _notifyStart ();
//
//	/**
//	*/
//	void setMeshName(std::string_view meshName);
//
//	/**
//	*/
//	virtual void _initParticlePosition(Particle* particle);
//
//	/**
//	*/
//	unsigned short _calculateRequestedParticles(float timeElapsed);
//};
}

#endif
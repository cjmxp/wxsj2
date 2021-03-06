			
INCLUDE_DIRECTORIES(
${BULLET_PHYSICS_SOURCE_DIR}/src }
)
	
ADD_LIBRARY(LibBulletCollision
				BroadphaseCollision/btAxisSweep3.cpp
				BroadphaseCollision/btBroadphaseProxy.cpp
				BroadphaseCollision/btCollisionAlgorithm.cpp
				BroadphaseCollision/btDispatcher.cpp
				BroadphaseCollision/btMultiSapBroadphase.cpp
				BroadphaseCollision/btOverlappingPairCache.cpp
				BroadphaseCollision/btSimpleBroadphase.cpp
				CollisionDispatch/btCollisionDispatcher.cpp
				CollisionDispatch/btCollisionObject.cpp
				CollisionDispatch/btCollisionWorld.cpp
				CollisionDispatch/btCompoundCollisionAlgorithm.cpp
				CollisionDispatch/btConvexConcaveCollisionAlgorithm.cpp
				CollisionDispatch/btDefaultCollisionConfiguration.cpp
				CollisionDispatch/btSphereSphereCollisionAlgorithm.cpp
				CollisionDispatch/btSphereBoxCollisionAlgorithm.cpp
				CollisionDispatch/btSphereTriangleCollisionAlgorithm.cpp
				CollisionDispatch/btConvexConvexAlgorithm.cpp
				CollisionDispatch/btEmptyCollisionAlgorithm.cpp
				CollisionDispatch/btManifoldResult.cpp
				CollisionDispatch/btSimulationIslandManager.cpp
				CollisionDispatch/btUnionFind.cpp
				CollisionDispatch/SphereTriangleDetector.cpp
				CollisionShapes/btBoxShape.cpp
				CollisionShapes/btBvhTriangleMeshShape.cpp
				CollisionShapes/btCapsuleShape.cpp
				CollisionShapes/btCollisionShape.cpp
				CollisionShapes/btCompoundShape.cpp
				CollisionShapes/btConcaveShape.cpp
				CollisionShapes/btConeShape.cpp
				CollisionShapes/btConvexHullShape.cpp
				CollisionShapes/btConvexShape.cpp
				CollisionShapes/btConvexInternalShape.cpp
				CollisionShapes/btConvexTriangleMeshShape.cpp
				CollisionShapes/btCylinderShape.cpp
				CollisionShapes/btEmptyShape.cpp
				CollisionShapes/btHeightfieldTerrainShape.cpp
				CollisionShapes/btMinkowskiSumShape.cpp
				CollisionShapes/btMultiSphereShape.cpp
				CollisionShapes/btOptimizedBvh.cpp
				CollisionShapes/btPolyhedralConvexShape.cpp
				CollisionShapes/btTetrahedronShape.cpp
				CollisionShapes/btSphereShape.cpp
				CollisionShapes/btStaticPlaneShape.cpp
				CollisionShapes/btStridingMeshInterface.cpp
				CollisionShapes/btTriangleCallback.cpp
				CollisionShapes/btTriangleBuffer.cpp
				CollisionShapes/btTriangleIndexVertexArray.cpp
				CollisionShapes/btTriangleMesh.cpp
				CollisionShapes/btTriangleMeshShape.cpp
				CollisionShapes/btUniformScalingShape.cpp
				NarrowPhaseCollision/btContinuousConvexCollision.cpp
				NarrowPhaseCollision/btGjkEpa.cpp
				NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp
				NarrowPhaseCollision/btConvexCast.cpp
				NarrowPhaseCollision/btGjkConvexCast.cpp
				NarrowPhaseCollision/btGjkPairDetector.cpp
				NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp
				NarrowPhaseCollision/btPersistentManifold.cpp
				NarrowPhaseCollision/btRaycastCallback.cpp
				NarrowPhaseCollision/btSubSimplexConvexCast.cpp
				NarrowPhaseCollision/btVoronoiSimplexSolver.cpp
)

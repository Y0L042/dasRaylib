// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from raylib.h:214:16
struct Vector2_GeneratedAnnotation : ManagedStructureAnnotation<Vector2> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Vector2_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Vector2", ml, "Vector2") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
	}
};

// from raylib.h:220:16
struct Vector3_GeneratedAnnotation : ManagedStructureAnnotation<Vector3> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Vector3_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Vector3", ml, "Vector3") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(z)>("z","z");
	}
};

// from raylib.h:227:16
struct Vector4_GeneratedAnnotation : ManagedStructureAnnotation<Vector4> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Vector4_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Vector4", ml, "Vector4") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(z)>("z","z");
		addField<DAS_BIND_MANAGED_FIELD(w)>("w","w");
	}
};

// from raylib.h:238:16
struct Matrix_GeneratedAnnotation : ManagedStructureAnnotation<::Matrix> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Matrix_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Matrix", ml, "::Matrix") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(m0)>("m0","m0");
		addField<DAS_BIND_MANAGED_FIELD(m4)>("m4","m4");
		addField<DAS_BIND_MANAGED_FIELD(m8)>("m8","m8");
		addField<DAS_BIND_MANAGED_FIELD(m12)>("m12","m12");
		addField<DAS_BIND_MANAGED_FIELD(m1)>("m1","m1");
		addField<DAS_BIND_MANAGED_FIELD(m5)>("m5","m5");
		addField<DAS_BIND_MANAGED_FIELD(m9)>("m9","m9");
		addField<DAS_BIND_MANAGED_FIELD(m13)>("m13","m13");
		addField<DAS_BIND_MANAGED_FIELD(m2)>("m2","m2");
		addField<DAS_BIND_MANAGED_FIELD(m6)>("m6","m6");
		addField<DAS_BIND_MANAGED_FIELD(m10)>("m10","m10");
		addField<DAS_BIND_MANAGED_FIELD(m14)>("m14","m14");
		addField<DAS_BIND_MANAGED_FIELD(m3)>("m3","m3");
		addField<DAS_BIND_MANAGED_FIELD(m7)>("m7","m7");
		addField<DAS_BIND_MANAGED_FIELD(m11)>("m11","m11");
		addField<DAS_BIND_MANAGED_FIELD(m15)>("m15","m15");
	}
};

// from raylib.h:246:16
struct Color_GeneratedAnnotation : ManagedStructureAnnotation<Color> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Color_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Color", ml, "Color") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(r)>("r","r");
		addField<DAS_BIND_MANAGED_FIELD(g)>("g","g");
		addField<DAS_BIND_MANAGED_FIELD(b)>("b","b");
		addField<DAS_BIND_MANAGED_FIELD(a)>("a","a");
	}
};

// from raylib.h:254:16
struct Rectangle_GeneratedAnnotation : ManagedStructureAnnotation<Rectangle> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Rectangle_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Rectangle", ml, "Rectangle") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(width)>("width","width");
		addField<DAS_BIND_MANAGED_FIELD(height)>("height","height");
	}
};

// from raylib.h:262:16
struct Image_GeneratedAnnotation : ManagedStructureAnnotation<Image> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Image_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Image", ml, "Image") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(width)>("width","width");
		addField<DAS_BIND_MANAGED_FIELD(height)>("height","height");
		addField<DAS_BIND_MANAGED_FIELD(mipmaps)>("mipmaps","mipmaps");
		addField<DAS_BIND_MANAGED_FIELD(format)>("format","format");
	}
};

// from raylib.h:271:16
struct Texture_GeneratedAnnotation : ManagedStructureAnnotation<Texture> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Texture_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Texture", ml, "Texture") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(width)>("width","width");
		addField<DAS_BIND_MANAGED_FIELD(height)>("height","height");
		addField<DAS_BIND_MANAGED_FIELD(mipmaps)>("mipmaps","mipmaps");
		addField<DAS_BIND_MANAGED_FIELD(format)>("format","format");
	}
};

// from raylib.h:286:16
struct RenderTexture_GeneratedAnnotation : ManagedStructureAnnotation<RenderTexture> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	RenderTexture_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("RenderTexture", ml, "RenderTexture") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(texture)>("texture","texture");
		addField<DAS_BIND_MANAGED_FIELD(depth)>("depth","depth");
	}
};

// from raylib.h:296:16
struct NPatchInfo_GeneratedAnnotation : ManagedStructureAnnotation<NPatchInfo> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	NPatchInfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("NPatchInfo", ml, "NPatchInfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(source)>("source","source");
		addField<DAS_BIND_MANAGED_FIELD(left)>("left","left");
		addField<DAS_BIND_MANAGED_FIELD(top)>("top","top");
		addField<DAS_BIND_MANAGED_FIELD(right)>("right","right");
		addField<DAS_BIND_MANAGED_FIELD(bottom)>("bottom","bottom");
		addField<DAS_BIND_MANAGED_FIELD(layout)>("layout","layout");
	}
};

// from raylib.h:306:16
struct GlyphInfo_GeneratedAnnotation : ManagedStructureAnnotation<GlyphInfo> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	GlyphInfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("GlyphInfo", ml, "GlyphInfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(value)>("value","value");
		addField<DAS_BIND_MANAGED_FIELD(offsetX)>("offsetX","offsetX");
		addField<DAS_BIND_MANAGED_FIELD(offsetY)>("offsetY","offsetY");
		addField<DAS_BIND_MANAGED_FIELD(advanceX)>("advanceX","advanceX");
		addField<DAS_BIND_MANAGED_FIELD(image)>("image","image");
	}
};

// from raylib.h:315:16
struct Font_GeneratedAnnotation : ManagedStructureAnnotation<Font> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Font_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Font", ml, "Font") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(baseSize)>("baseSize","baseSize");
		addField<DAS_BIND_MANAGED_FIELD(glyphCount)>("glyphCount","glyphCount");
		addField<DAS_BIND_MANAGED_FIELD(glyphPadding)>("glyphPadding","glyphPadding");
		addField<DAS_BIND_MANAGED_FIELD(texture)>("texture","texture");
		addField<DAS_BIND_MANAGED_FIELD(recs)>("recs","recs");
		addField<DAS_BIND_MANAGED_FIELD(glyphs)>("glyphs","glyphs");
	}
};

// from raylib.h:325:16
struct Camera3D_GeneratedAnnotation : ManagedStructureAnnotation<Camera3D> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Camera3D_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Camera3D", ml, "Camera3D") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(position)>("position","position");
		addField<DAS_BIND_MANAGED_FIELD(target)>("target","target");
		addField<DAS_BIND_MANAGED_FIELD(up)>("up","up");
		addField<DAS_BIND_MANAGED_FIELD(fovy)>("fovy","fovy");
		addField<DAS_BIND_MANAGED_FIELD(projection)>("projection","projection");
	}
};

// from raylib.h:336:16
struct Camera2D_GeneratedAnnotation : ManagedStructureAnnotation<Camera2D> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Camera2D_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Camera2D", ml, "Camera2D") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(offset)>("offset","offset");
		addField<DAS_BIND_MANAGED_FIELD(target)>("target","target");
		addField<DAS_BIND_MANAGED_FIELD(rotation)>("rotation","rotation");
		addField<DAS_BIND_MANAGED_FIELD(zoom)>("zoom","zoom");
	}
};

// from raylib.h:344:16
struct Mesh_GeneratedAnnotation : ManagedStructureAnnotation<Mesh> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Mesh_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Mesh", ml, "Mesh") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(vertexCount)>("vertexCount","vertexCount");
		addField<DAS_BIND_MANAGED_FIELD(triangleCount)>("triangleCount","triangleCount");
		addField<DAS_BIND_MANAGED_FIELD(vertices)>("vertices","vertices");
		addField<DAS_BIND_MANAGED_FIELD(texcoords)>("texcoords","texcoords");
		addField<DAS_BIND_MANAGED_FIELD(texcoords2)>("texcoords2","texcoords2");
		addField<DAS_BIND_MANAGED_FIELD(normals)>("normals","normals");
		addField<DAS_BIND_MANAGED_FIELD(tangents)>("tangents","tangents");
		addField<DAS_BIND_MANAGED_FIELD(colors)>("colors","colors");
		addField<DAS_BIND_MANAGED_FIELD(indices)>("indices","indices");
		addField<DAS_BIND_MANAGED_FIELD(boneCount)>("boneCount","boneCount");
		addField<DAS_BIND_MANAGED_FIELD(boneIndices)>("boneIndices","boneIndices");
		addField<DAS_BIND_MANAGED_FIELD(boneWeights)>("boneWeights","boneWeights");
		addField<DAS_BIND_MANAGED_FIELD(animVertices)>("animVertices","animVertices");
		addField<DAS_BIND_MANAGED_FIELD(animNormals)>("animNormals","animNormals");
		addField<DAS_BIND_MANAGED_FIELD(vaoId)>("vaoId","vaoId");
		addField<DAS_BIND_MANAGED_FIELD(vboId)>("vboId","vboId");
	}
};

// from raylib.h:373:16
struct Shader_GeneratedAnnotation : ManagedStructureAnnotation<Shader> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Shader_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Shader", ml, "Shader") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(locs)>("locs","locs");
	}
};

// from raylib.h:379:16
struct MaterialMap_GeneratedAnnotation : ManagedStructureAnnotation<MaterialMap> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	MaterialMap_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("MaterialMap", ml, "MaterialMap") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(texture)>("texture","texture");
		addField<DAS_BIND_MANAGED_FIELD(color)>("color","color");
		addField<DAS_BIND_MANAGED_FIELD(value)>("value","value");
	}
};

// from raylib.h:386:16
struct Material_GeneratedAnnotation : ManagedStructureAnnotation<Material> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Material_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Material", ml, "Material") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(shader)>("shader","shader");
		addField<DAS_BIND_MANAGED_FIELD(maps)>("maps","maps");
		addField<DAS_BIND_MANAGED_FIELD(params)>("params","params");
	}
};

// from raylib.h:393:16
struct Transform_GeneratedAnnotation : ManagedStructureAnnotation<Transform> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Transform_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Transform", ml, "Transform") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(translation)>("translation","translation");
		addField<DAS_BIND_MANAGED_FIELD(rotation)>("rotation","rotation");
		addField<DAS_BIND_MANAGED_FIELD(scale)>("scale","scale");
	}
};

// from raylib.h:403:16
struct BoneInfo_GeneratedAnnotation : ManagedStructureAnnotation<BoneInfo> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	BoneInfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("BoneInfo", ml, "BoneInfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(parent)>("parent","parent");
	}
};

// from raylib.h:409:16
struct ModelSkeleton_GeneratedAnnotation : ManagedStructureAnnotation<ModelSkeleton> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	ModelSkeleton_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ModelSkeleton", ml, "ModelSkeleton") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(boneCount)>("boneCount","boneCount");
		addField<DAS_BIND_MANAGED_FIELD(bones)>("bones","bones");
		addField<DAS_BIND_MANAGED_FIELD(bindPose)>("bindPose","bindPose");
	}
};

// from raylib.h:416:16
struct Model_GeneratedAnnotation : ManagedStructureAnnotation<Model> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Model_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Model", ml, "Model") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(transform)>("transform","transform");
		addField<DAS_BIND_MANAGED_FIELD(meshCount)>("meshCount","meshCount");
		addField<DAS_BIND_MANAGED_FIELD(materialCount)>("materialCount","materialCount");
		addField<DAS_BIND_MANAGED_FIELD(meshes)>("meshes","meshes");
		addField<DAS_BIND_MANAGED_FIELD(materials)>("materials","materials");
		addField<DAS_BIND_MANAGED_FIELD(meshMaterial)>("meshMaterial","meshMaterial");
		addField<DAS_BIND_MANAGED_FIELD(skeleton)>("skeleton","skeleton");
		addField<DAS_BIND_MANAGED_FIELD(currentPose)>("currentPose","currentPose");
		addField<DAS_BIND_MANAGED_FIELD(boneMatrices)>("boneMatrices","boneMatrices");
	}
};

// from raylib.h:434:16
struct ModelAnimation_GeneratedAnnotation : ManagedStructureAnnotation<ModelAnimation> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	ModelAnimation_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ModelAnimation", ml, "ModelAnimation") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(boneCount)>("boneCount","boneCount");
		addField<DAS_BIND_MANAGED_FIELD(keyframeCount)>("keyframeCount","keyframeCount");
		addField<DAS_BIND_MANAGED_FIELD(keyframePoses)>("keyframePoses","keyframePoses");
	}
};

// from raylib.h:443:16
struct Ray_GeneratedAnnotation : ManagedStructureAnnotation<Ray> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Ray_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Ray", ml, "Ray") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(position)>("position","position");
		addField<DAS_BIND_MANAGED_FIELD(direction)>("direction","direction");
	}
};

// from raylib.h:449:16
struct RayCollision_GeneratedAnnotation : ManagedStructureAnnotation<RayCollision> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	RayCollision_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("RayCollision", ml, "RayCollision") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(hit)>("hit","hit");
		addField<DAS_BIND_MANAGED_FIELD(distance)>("distance","distance");
		addField<DAS_BIND_MANAGED_FIELD(point)>("point","point");
		addField<DAS_BIND_MANAGED_FIELD(normal)>("normal","normal");
	}
};

// from raylib.h:457:16
struct BoundingBox_GeneratedAnnotation : ManagedStructureAnnotation<BoundingBox> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	BoundingBox_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("BoundingBox", ml, "BoundingBox") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(min)>("min","min");
		addField<DAS_BIND_MANAGED_FIELD(max)>("max","max");
	}
};

// from raylib.h:463:16
struct Wave_GeneratedAnnotation : ManagedStructureAnnotation<Wave> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Wave_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Wave", ml, "Wave") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(frameCount)>("frameCount","frameCount");
		addField<DAS_BIND_MANAGED_FIELD(sampleRate)>("sampleRate","sampleRate");
		addField<DAS_BIND_MANAGED_FIELD(sampleSize)>("sampleSize","sampleSize");
		addField<DAS_BIND_MANAGED_FIELD(channels)>("channels","channels");
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
	}
};

// from raylib.h:477:16
struct AudioStream_GeneratedAnnotation : ManagedStructureAnnotation<AudioStream> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	AudioStream_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("AudioStream", ml, "AudioStream") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(buffer)>("buffer","buffer");
		addField<DAS_BIND_MANAGED_FIELD(processor)>("processor","processor");
		addField<DAS_BIND_MANAGED_FIELD(sampleRate)>("sampleRate","sampleRate");
		addField<DAS_BIND_MANAGED_FIELD(sampleSize)>("sampleSize","sampleSize");
		addField<DAS_BIND_MANAGED_FIELD(channels)>("channels","channels");
	}
};

// from raylib.h:487:16
struct Sound_GeneratedAnnotation : ManagedStructureAnnotation<Sound> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Sound_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Sound", ml, "Sound") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(stream)>("stream","stream");
		addField<DAS_BIND_MANAGED_FIELD(frameCount)>("frameCount","frameCount");
	}
};

// from raylib.h:493:16
struct Music_GeneratedAnnotation : ManagedStructureAnnotation<Music> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	Music_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("Music", ml, "Music") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(stream)>("stream","stream");
		addField<DAS_BIND_MANAGED_FIELD(frameCount)>("frameCount","frameCount");
		addField<DAS_BIND_MANAGED_FIELD(looping)>("looping","looping");
		addField<DAS_BIND_MANAGED_FIELD(ctxType)>("ctxType","ctxType");
		addField<DAS_BIND_MANAGED_FIELD(ctxData)>("ctxData","ctxData");
	}
};

// from raylib.h:503:16
struct VrDeviceInfo_GeneratedAnnotation : ManagedStructureAnnotation<VrDeviceInfo> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	VrDeviceInfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("VrDeviceInfo", ml, "VrDeviceInfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(hResolution)>("hResolution","hResolution");
		addField<DAS_BIND_MANAGED_FIELD(vResolution)>("vResolution","vResolution");
		addField<DAS_BIND_MANAGED_FIELD(hScreenSize)>("hScreenSize","hScreenSize");
		addField<DAS_BIND_MANAGED_FIELD(vScreenSize)>("vScreenSize","vScreenSize");
		addField<DAS_BIND_MANAGED_FIELD(eyeToScreenDistance)>("eyeToScreenDistance","eyeToScreenDistance");
		addField<DAS_BIND_MANAGED_FIELD(lensSeparationDistance)>("lensSeparationDistance","lensSeparationDistance");
		addField<DAS_BIND_MANAGED_FIELD(interpupillaryDistance)>("interpupillaryDistance","interpupillaryDistance");
		addField<DAS_BIND_MANAGED_FIELD(lensDistortionValues)>("lensDistortionValues","lensDistortionValues");
		addField<DAS_BIND_MANAGED_FIELD(chromaAbCorrection)>("chromaAbCorrection","chromaAbCorrection");
	}
};

// from raylib.h:516:16
struct VrStereoConfig_GeneratedAnnotation : ManagedStructureAnnotation<VrStereoConfig> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	VrStereoConfig_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("VrStereoConfig", ml, "VrStereoConfig") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(projection)>("projection","projection");
		addField<DAS_BIND_MANAGED_FIELD(viewOffset)>("viewOffset","viewOffset");
		addField<DAS_BIND_MANAGED_FIELD(leftLensCenter)>("leftLensCenter","leftLensCenter");
		addField<DAS_BIND_MANAGED_FIELD(rightLensCenter)>("rightLensCenter","rightLensCenter");
		addField<DAS_BIND_MANAGED_FIELD(leftScreenCenter)>("leftScreenCenter","leftScreenCenter");
		addField<DAS_BIND_MANAGED_FIELD(rightScreenCenter)>("rightScreenCenter","rightScreenCenter");
		addField<DAS_BIND_MANAGED_FIELD(scale)>("scale","scale");
		addField<DAS_BIND_MANAGED_FIELD(scaleIn)>("scaleIn","scaleIn");
	}
};

// from raylib.h:528:16
struct FilePathList_GeneratedAnnotation : ManagedStructureAnnotation<FilePathList> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	FilePathList_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("FilePathList", ml, "FilePathList") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(count)>("count","count");
		addField<DAS_BIND_MANAGED_FIELD(paths)>("paths","paths");
	}
};

// from raylib.h:534:16
struct AutomationEvent_GeneratedAnnotation : ManagedStructureAnnotation<AutomationEvent> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	AutomationEvent_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("AutomationEvent", ml, "AutomationEvent") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(frame)>("frame","frame");
		addField<DAS_BIND_MANAGED_FIELD(type)>("_type","type");
		addField<DAS_BIND_MANAGED_FIELD(params)>("params","params");
	}
};

// from raylib.h:541:16
struct AutomationEventList_GeneratedAnnotation : ManagedStructureAnnotation<AutomationEventList> {
	virtual bool isLocal() const override { return true; }
	virtual bool canBePlacedInContainer() const override { return true; }
	virtual bool hasNonTrivialCtor() const override { return false; }
	virtual bool canCopy() const override { return true; }
	AutomationEventList_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("AutomationEventList", ml, "AutomationEventList") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(capacity)>("capacity","capacity");
		addField<DAS_BIND_MANAGED_FIELD(count)>("count","count");
		addField<DAS_BIND_MANAGED_FIELD(events)>("events","events");
	}
};


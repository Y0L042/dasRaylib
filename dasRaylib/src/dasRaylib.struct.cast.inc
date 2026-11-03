// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

template <> struct cast_arg<Vector2> {
	static __forceinline const Vector2 & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Vector2 *>::to(res);
	}
};
template <> struct cast_arg<Vector3> {
	static __forceinline const Vector3 & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Vector3 *>::to(res);
	}
};
template <> struct cast_arg<Vector4> {
	static __forceinline const Vector4 & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Vector4 *>::to(res);
	}
};
template <> struct cast_arg<::Matrix> {
	static __forceinline const ::Matrix & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<::Matrix *>::to(res);
	}
};
template <> struct cast_arg<Color> {
	static __forceinline const Color & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Color *>::to(res);
	}
};
template <> struct cast_arg<Rectangle> {
	static __forceinline const Rectangle & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Rectangle *>::to(res);
	}
};
template <> struct cast_arg<Image> {
	static __forceinline const Image & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Image *>::to(res);
	}
};
template <> struct cast_arg<Texture> {
	static __forceinline const Texture & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Texture *>::to(res);
	}
};
template <> struct cast_arg<RenderTexture> {
	static __forceinline const RenderTexture & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<RenderTexture *>::to(res);
	}
};
template <> struct cast_arg<NPatchInfo> {
	static __forceinline const NPatchInfo & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<NPatchInfo *>::to(res);
	}
};
template <> struct cast_arg<GlyphInfo> {
	static __forceinline const GlyphInfo & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<GlyphInfo *>::to(res);
	}
};
template <> struct cast_arg<Font> {
	static __forceinline const Font & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Font *>::to(res);
	}
};
template <> struct cast_arg<Camera3D> {
	static __forceinline const Camera3D & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Camera3D *>::to(res);
	}
};
template <> struct cast_arg<Camera2D> {
	static __forceinline const Camera2D & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Camera2D *>::to(res);
	}
};
template <> struct cast_arg<Mesh> {
	static __forceinline const Mesh & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Mesh *>::to(res);
	}
};
template <> struct cast_arg<Shader> {
	static __forceinline const Shader & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Shader *>::to(res);
	}
};
template <> struct cast_arg<MaterialMap> {
	static __forceinline const MaterialMap & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<MaterialMap *>::to(res);
	}
};
template <> struct cast_arg<Material> {
	static __forceinline const Material & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Material *>::to(res);
	}
};
template <> struct cast_arg<Transform> {
	static __forceinline const Transform & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Transform *>::to(res);
	}
};
template <> struct cast_arg<BoneInfo> {
	static __forceinline const BoneInfo & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<BoneInfo *>::to(res);
	}
};
template <> struct cast_arg<ModelSkeleton> {
	static __forceinline const ModelSkeleton & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<ModelSkeleton *>::to(res);
	}
};
template <> struct cast_arg<Model> {
	static __forceinline const Model & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Model *>::to(res);
	}
};
template <> struct cast_arg<ModelAnimation> {
	static __forceinline const ModelAnimation & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<ModelAnimation *>::to(res);
	}
};
template <> struct cast_arg<Ray> {
	static __forceinline const Ray & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Ray *>::to(res);
	}
};
template <> struct cast_arg<RayCollision> {
	static __forceinline const RayCollision & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<RayCollision *>::to(res);
	}
};
template <> struct cast_arg<BoundingBox> {
	static __forceinline const BoundingBox & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<BoundingBox *>::to(res);
	}
};
template <> struct cast_arg<Wave> {
	static __forceinline const Wave & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Wave *>::to(res);
	}
};
template <> struct cast_arg<AudioStream> {
	static __forceinline const AudioStream & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<AudioStream *>::to(res);
	}
};
template <> struct cast_arg<Sound> {
	static __forceinline const Sound & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Sound *>::to(res);
	}
};
template <> struct cast_arg<Music> {
	static __forceinline const Music & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<Music *>::to(res);
	}
};
template <> struct cast_arg<VrDeviceInfo> {
	static __forceinline const VrDeviceInfo & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<VrDeviceInfo *>::to(res);
	}
};
template <> struct cast_arg<VrStereoConfig> {
	static __forceinline const VrStereoConfig & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<VrStereoConfig *>::to(res);
	}
};
template <> struct cast_arg<FilePathList> {
	static __forceinline const FilePathList & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<FilePathList *>::to(res);
	}
};
template <> struct cast_arg<AutomationEvent> {
	static __forceinline const AutomationEvent & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<AutomationEvent *>::to(res);
	}
};
template <> struct cast_arg<AutomationEventList> {
	static __forceinline const AutomationEventList & to ( Context & ctx, SimNode * node ) {
		vec4f res = node->eval(ctx);
		return * cast<AutomationEventList *>::to(res);
	}
};

options gen2

module rlights shared public

// Port of rlights.h from the raylib examples, by Victor Fisac and Ramon Santamaria. zlib license.
require raylib/raylib_boost

let public MAX_LIGHTS = 4

enum public LightType {
    LIGHT_DIRECTIONAL = 0
    LIGHT_POINT
}

struct public Light {
    light_type : LightType
    enabled : bool
    position : float3
    target : float3
    color : float4
    enabled_loc : int
    type_loc : int
    position_loc : int
    target_loc : int
    color_loc : int
}

var private lights_count = 0

def public UpdateLightValues(shader : Shader; light : Light) {
    SetShaderValue(shader, light.enabled_loc, light.enabled ? 1 : 0)
    SetShaderValue(shader, light.type_loc, int(light.light_type))
    SetShaderValue(shader, light.position_loc, light.position)
    SetShaderValue(shader, light.target_loc, light.target)
    SetShaderValue(shader, light.color_loc, light.color)
}

def public CreateLight(light_type : LightType; position, target : float3; color : float4; shader : Shader) : Light {
    var light : Light
    if (lights_count < MAX_LIGHTS) {
        light.enabled = true
        light.light_type = light_type
        light.position = position
        light.target = target
        light.color = color
        light.enabled_loc = GetShaderLocation(shader, "lights[{lights_count}].enabled")
        light.type_loc = GetShaderLocation(shader, "lights[{lights_count}].type")
        light.position_loc = GetShaderLocation(shader, "lights[{lights_count}].position")
        light.target_loc = GetShaderLocation(shader, "lights[{lights_count}].target")
        light.color_loc = GetShaderLocation(shader, "lights[{lights_count}].color")
        UpdateLightValues(shader, light)
        lights_count++
    }
    return light
}

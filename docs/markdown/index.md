# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`MAX_VOLUME`](#audio__manager__component_8h_1a7ed6a6db7ec466a04b820f3de267708a)            | 
`define `[`VOLUME_STEP`](#audio__manager__component_8h_1a0ee22d7ec8557106b82e9ee74ee813f9)            | 
`define `[`MAX_SPRITES`](#guerrilla__renderer__component_8h_1aeb21c7ac080eea985b7701df626d9cf4)            | 
`define `[`VERTEX_SIZE`](#guerrilla__renderer__component_8h_1a14571eb5f0eee95bf614e04c59b0207a)            | 
`define `[`SPRITE_SIZE`](#guerrilla__renderer__component_8h_1ae3611cd7caad34521610ef1f7c116772)            | 
`define `[`BUFFER_SIZE`](#guerrilla__renderer__component_8h_1a6b20d41d6252e9871430c242cb1a56e7)            | 
`define `[`INDICES_SIZE`](#guerrilla__renderer__component_8h_1a26b4181e8c7e8b52d0f0314f19b273b6)            | 
`define `[`SHADER_VERTEX_LOCATION`](#guerrilla__renderer__component_8h_1a52d3489372c1a1e2df43a7edd650f8f9)            | 
`define `[`SHADER_UV_LOCATION`](#guerrilla__renderer__component_8h_1a50fae95b8efc92db604fd6c338c0afb5)            | 
`define `[`SHADER_TEXTURE_ID_LOCATION`](#guerrilla__renderer__component_8h_1a60d1555232142c51c49fab6d00a8dab5)            | 
`define `[`SHADER_COLOR_LOCATION`](#guerrilla__renderer__component_8h_1a353058b3a9e4cadae7a546995ab962e2)            | 
`define `[`MAX_ALLOWED_TEXTURES`](#guerrilla__renderer__component_8h_1a2238f2db52f7f84a05b1eb5bf941b832)            | 
`define `[`LOGS`](#logger__component_8h_1a11b913242029687af09171c20ae788eb)            | 
`define `[`LOG`](#logger__component_8h_1af855c94dc540e943632089ce7496faac)            | 
`define `[`LOGEXTENDED`](#logger__component_8h_1a0ae67eef63b9490b31b5b5186043e2e1)            | 
`define `[`ERRORLOG`](#logger__component_8h_1aa7ffc82c4c3a8110e9f1ba94cc8db47d)            | 
`define `[`ASSERT`](#logger__component_8h_1aca68c0d4ac8df0838e209fb5300f7be3)            | 
`define `[`SUCCESS`](#logger__component_8h_1a7df9b8ef4e20b4ca18048f15ddc197f5)            | 
`define `[`GLCall`](#logger__component_8h_1a8cc1e1baeb83f3fa64a4aaa75baf3548)            | 
`define `[`DevILCall`](#logger__component_8h_1abb204b84a5d8697428c8c6f5fda78a9d)            | 
`define `[`GetVariableName`](#master__component_8h_1affb81717953a68a565706edd36f55096)            | 
`define `[`_USE_MATH_DEFINES`](#rubeus__maths__library_8h_1a525335710b53cb064ca56b936120431e)            | 
`public int `[`toHex`](#logger__component_8h_1a5eca9f3b145e0d6a208c67c80493804e)`(int decimal)`            | Converts a decimal to a hexadecimal.
`public void `[`GLClearError`](#logger__component_8h_1ab05574ce178db83adf89cd74ee93fdf5)`()`            | Clear all OpenGL error flags.
`public void `[`DevILClearError`](#logger__component_8h_1a3f5bf6cd6f7b15ed36da100f3ee029ec)`()`            | Clears the DevIL error stack.
`namespace `[`RML`](#namespace_r_m_l) | 
`namespace `[`Rubeus`](#namespace_rubeus) | 
`namespace `[`Rubeus::AudioComponents`](#namespace_rubeus_1_1_audio_components) | 
`namespace `[`Rubeus::GraphicComponents`](#namespace_rubeus_1_1_graphic_components) | 
`namespace `[`Rubeus::UtilityComponents`](#namespace_rubeus_1_1_utility_components) | 
`class `[`ETrackName`](#class_e_track_name) | List of track names and track numbers.
`class `[`ETrackType`](#class_e_track_type) | List of track types available.
`class `[`Group`](#class_group) | A group of objects in a family based hierarchy.
`class `[`MasterComponent`](#class_master_component) | A master component. Serves as parent class for all components.
`class `[`RShader`](#class_r_shader) | A shader class. Allows shader code to be sent to OpenGL.
`union `[`Unnamed`](#union_unnamed) | An unnamed union. Used to refer to Matrix4 columns as an array of Vector4Ds.

## Members

#### `define `[`MAX_VOLUME`](#audio__manager__component_8h_1a7ed6a6db7ec466a04b820f3de267708a) 

#### `define `[`VOLUME_STEP`](#audio__manager__component_8h_1a0ee22d7ec8557106b82e9ee74ee813f9) 

#### `define `[`MAX_SPRITES`](#guerrilla__renderer__component_8h_1aeb21c7ac080eea985b7701df626d9cf4) 

#### `define `[`VERTEX_SIZE`](#guerrilla__renderer__component_8h_1a14571eb5f0eee95bf614e04c59b0207a) 

#### `define `[`SPRITE_SIZE`](#guerrilla__renderer__component_8h_1ae3611cd7caad34521610ef1f7c116772) 

#### `define `[`BUFFER_SIZE`](#guerrilla__renderer__component_8h_1a6b20d41d6252e9871430c242cb1a56e7) 

#### `define `[`INDICES_SIZE`](#guerrilla__renderer__component_8h_1a26b4181e8c7e8b52d0f0314f19b273b6) 

#### `define `[`SHADER_VERTEX_LOCATION`](#guerrilla__renderer__component_8h_1a52d3489372c1a1e2df43a7edd650f8f9) 

#### `define `[`SHADER_UV_LOCATION`](#guerrilla__renderer__component_8h_1a50fae95b8efc92db604fd6c338c0afb5) 

#### `define `[`SHADER_TEXTURE_ID_LOCATION`](#guerrilla__renderer__component_8h_1a60d1555232142c51c49fab6d00a8dab5) 

#### `define `[`SHADER_COLOR_LOCATION`](#guerrilla__renderer__component_8h_1a353058b3a9e4cadae7a546995ab962e2) 

#### `define `[`MAX_ALLOWED_TEXTURES`](#guerrilla__renderer__component_8h_1a2238f2db52f7f84a05b1eb5bf941b832) 

#### `define `[`LOGS`](#logger__component_8h_1a11b913242029687af09171c20ae788eb) 

#### `define `[`LOG`](#logger__component_8h_1af855c94dc540e943632089ce7496faac) 

#### `define `[`LOGEXTENDED`](#logger__component_8h_1a0ae67eef63b9490b31b5b5186043e2e1) 

#### `define `[`ERRORLOG`](#logger__component_8h_1aa7ffc82c4c3a8110e9f1ba94cc8db47d) 

#### `define `[`ASSERT`](#logger__component_8h_1aca68c0d4ac8df0838e209fb5300f7be3) 

#### `define `[`SUCCESS`](#logger__component_8h_1a7df9b8ef4e20b4ca18048f15ddc197f5) 

#### `define `[`GLCall`](#logger__component_8h_1a8cc1e1baeb83f3fa64a4aaa75baf3548) 

#### `define `[`DevILCall`](#logger__component_8h_1abb204b84a5d8697428c8c6f5fda78a9d) 

#### `define `[`GetVariableName`](#master__component_8h_1affb81717953a68a565706edd36f55096) 

#### `define `[`_USE_MATH_DEFINES`](#rubeus__maths__library_8h_1a525335710b53cb064ca56b936120431e) 

#### `public int `[`toHex`](#logger__component_8h_1a5eca9f3b145e0d6a208c67c80493804e)`(int decimal)` 

Converts a decimal to a hexadecimal.

#### Parameters
* `decimal` The decimal.

#### Returns
Decimal as an int.

#### `public void `[`GLClearError`](#logger__component_8h_1ab05574ce178db83adf89cd74ee93fdf5)`()` 

Clear all OpenGL error flags.

#### `public void `[`DevILClearError`](#logger__component_8h_1a3f5bf6cd6f7b15ed36da100f3ee029ec)`()` 

Clears the DevIL error stack.

# namespace `RML` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline float `[`degreeToRadians`](#rubeus__maths__library_8h_1a172fe5f30b4f649cacce7e1b110e46c6)`(float degree)`            | Converts degree to radians.
`struct `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4) | A matrix 4.
`struct `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d) | A vector in 2D.
`struct `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d) | A vector 3d.
`struct `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d) | A vector in 4d.

## Members

#### `public inline float `[`degreeToRadians`](#rubeus__maths__library_8h_1a172fe5f30b4f649cacce7e1b110e46c6)`(float degree)` 

Converts degree to radians.

#### Parameters
* `degree` The degree.

#### Returns
Radians in float.

# struct `RML::Matrix4` 

A matrix 4.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`elements`](#struct_r_m_l_1_1_matrix4_1a0168d944094fa74d7f946ad0d79ab08d) | The elements[4 * 4].
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`columns`](#struct_r_m_l_1_1_matrix4_1afbd8a5a65a2fa1a0dc2e019ea702509b) | The columns[4] in forms of Vector4Ds.
`public union RML::Matrix4::@0 `[`@1`](#struct_r_m_l_1_1_matrix4_1a907bbfc96cfce60bdc19fb57c24c0f68) | 
`public  `[`Matrix4`](#struct_r_m_l_1_1_matrix4_1ae6cb41ca121c787cd424e30be9ec197b)`()` | Default constructor.
`public  `[`Matrix4`](#struct_r_m_l_1_1_matrix4_1af6e49071696e577315efb81e34655d3b)`(float diagonal)` | Constructor. Initialises [Matrix4](#struct_r_m_l_1_1_matrix4) with a diagonal matrix.
`public `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & `[`multiply`](#struct_r_m_l_1_1_matrix4_1a018d5eead295d1575dd1cfaf4892bb1a)`(const `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & other)` | Multiplies the given other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`multiply`](#struct_r_m_l_1_1_matrix4_1ad12fab1ba72a4c130d7945f51bb0c993)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector)` | Multiplies the given [Vector3D](#struct_r_m_l_1_1_vector3_d).
`public `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & `[`operator*=`](#struct_r_m_l_1_1_matrix4_1a28d8726ea817c8319d9b3d0437af1f35)`(const `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & other)` | Multiplication assignment operator.

## Members

#### `public float `[`elements`](#struct_r_m_l_1_1_matrix4_1a0168d944094fa74d7f946ad0d79ab08d) 

The elements[4 * 4].

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`columns`](#struct_r_m_l_1_1_matrix4_1afbd8a5a65a2fa1a0dc2e019ea702509b) 

The columns[4] in forms of Vector4Ds.

#### `public union RML::Matrix4::@0 `[`@1`](#struct_r_m_l_1_1_matrix4_1a907bbfc96cfce60bdc19fb57c24c0f68) 

#### `public  `[`Matrix4`](#struct_r_m_l_1_1_matrix4_1ae6cb41ca121c787cd424e30be9ec197b)`()` 

Default constructor.

#### `public  `[`Matrix4`](#struct_r_m_l_1_1_matrix4_1af6e49071696e577315efb81e34655d3b)`(float diagonal)` 

Constructor. Initialises [Matrix4](#struct_r_m_l_1_1_matrix4) with a diagonal matrix.

#### Parameters
* `diagonal` The diagonal.

#### `public `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & `[`multiply`](#struct_r_m_l_1_1_matrix4_1a018d5eead295d1575dd1cfaf4892bb1a)`(const `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & other)` 

Multiplies the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Matrix4](#struct_r_m_l_1_1_matrix4).

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`multiply`](#struct_r_m_l_1_1_matrix4_1ad12fab1ba72a4c130d7945f51bb0c993)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector)` 

Multiplies the given [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### Parameters
* `vector` The [Vector3D](#struct_r_m_l_1_1_vector3_d) to multiply.

#### Returns
The [Vector3D](#struct_r_m_l_1_1_vector3_d) result.

#### `public `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & `[`operator*=`](#struct_r_m_l_1_1_matrix4_1a28d8726ea817c8319d9b3d0437af1f35)`(const `[`Matrix4`](#struct_r_m_l_1_1_matrix4)` & other)` 

Multiplication assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

# struct `RML::Vector2D` 

A vector in 2D.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`x`](#struct_r_m_l_1_1_vector2_d_1ab5c3a92e55c53865ba1662ad2beb6ef2) | The x coordinate.
`public float `[`y`](#struct_r_m_l_1_1_vector2_d_1a05f39d7943bb201be12d409246fc7bae) | The y coordinate.
`public  `[`Vector2D`](#struct_r_m_l_1_1_vector2_d_1a39ae4a2d20e822527b329683a2bf0dda)`()` | Default constructor Initialises a [Vector2D](#struct_r_m_l_1_1_vector2_d) with (0,0)
`public  `[`Vector2D`](#struct_r_m_l_1_1_vector2_d_1ab7d29d20470e5557b17a84208275eab0)`(const float & x,const float & y)` | Constructor.
`public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1a235406fb3743bab4fe5d4ce7ac2695e2)`(`[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector) const` | Gets length of vector.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`add`](#struct_r_m_l_1_1_vector2_d_1a24a5d8d195ddd7e0e5f27c05a93bf823)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Adds other.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`subtract`](#struct_r_m_l_1_1_vector2_d_1a40f35e27b1a9c197a3370aafc1ae61f4)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Subtracts the given other.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`multiply`](#struct_r_m_l_1_1_vector2_d_1a0c18b119beab3d9ee30fb5b86e76d75b)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Multiplies the given other.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`divide`](#struct_r_m_l_1_1_vector2_d_1af6867f3291fa38bb929187ec966390f2)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Divides each element of this vector one by one by the corresponding vector of the other vector. Returns [a/x , b/y] if [a , b] is divided by [x , y].
`public bool `[`operator==`](#struct_r_m_l_1_1_vector2_d_1a4d39c5e0743400d7d14d0683ff168a5a)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Equality operator.
`public bool `[`operator!=`](#struct_r_m_l_1_1_vector2_d_1ad0fd2b1ac014d6345224d03f258a1164)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Inequality operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector2_d_1a933787f37217402094ecec3f3e3de01c)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Addition assignment operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector2_d_1a4a19917907c69474afc0330edaa05f08)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Subtraction assignment operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector2_d_1a4caff2a72c5abc5d89218809d899e90d)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Multiplication assignment operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector2_d_1a879806aa7dc16c51349208bf7da904e4)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Division assignment operator.

## Members

#### `public float `[`x`](#struct_r_m_l_1_1_vector2_d_1ab5c3a92e55c53865ba1662ad2beb6ef2) 

The x coordinate.

#### `public float `[`y`](#struct_r_m_l_1_1_vector2_d_1a05f39d7943bb201be12d409246fc7bae) 

The y coordinate.

#### `public  `[`Vector2D`](#struct_r_m_l_1_1_vector2_d_1a39ae4a2d20e822527b329683a2bf0dda)`()` 

Default constructor Initialises a [Vector2D](#struct_r_m_l_1_1_vector2_d) with (0,0)

#### `public  `[`Vector2D`](#struct_r_m_l_1_1_vector2_d_1ab7d29d20470e5557b17a84208275eab0)`(const float & x,const float & y)` 

Constructor.

#### Parameters
* `x` The x coordinate. 

* `y` The y coordinate.

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1a235406fb3743bab4fe5d4ce7ac2695e2)`(`[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector) const` 

Gets length of vector.

#### Parameters
* `vector` The vector.

#### Returns
The length.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`add`](#struct_r_m_l_1_1_vector2_d_1a24a5d8d195ddd7e0e5f27c05a93bf823)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Adds other.

#### Parameters
* `other` The other to add.

#### Returns
A reference to a [Vector2D](#struct_r_m_l_1_1_vector2_d).

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`subtract`](#struct_r_m_l_1_1_vector2_d_1a40f35e27b1a9c197a3370aafc1ae61f4)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Subtracts the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector2D](#struct_r_m_l_1_1_vector2_d).

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`multiply`](#struct_r_m_l_1_1_vector2_d_1a0c18b119beab3d9ee30fb5b86e76d75b)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Multiplies the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector2D](#struct_r_m_l_1_1_vector2_d).

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`divide`](#struct_r_m_l_1_1_vector2_d_1af6867f3291fa38bb929187ec966390f2)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Divides each element of this vector one by one by the corresponding vector of the other vector. Returns [a/x , b/y] if [a , b] is divided by [x , y].

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector2D](#struct_r_m_l_1_1_vector2_d).

#### `public bool `[`operator==`](#struct_r_m_l_1_1_vector2_d_1a4d39c5e0743400d7d14d0683ff168a5a)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Equality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are considered equivalent.

#### `public bool `[`operator!=`](#struct_r_m_l_1_1_vector2_d_1ad0fd2b1ac014d6345224d03f258a1164)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Inequality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are not considered equivalent.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector2_d_1a933787f37217402094ecec3f3e3de01c)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Addition assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector2_d_1a4a19917907c69474afc0330edaa05f08)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Subtraction assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector2_d_1a4caff2a72c5abc5d89218809d899e90d)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Multiplication assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector2_d_1a879806aa7dc16c51349208bf7da904e4)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Division assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

# struct `RML::Vector3D` 

A vector 3d.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`x`](#struct_r_m_l_1_1_vector3_d_1a6a44f9334ebb4ae0ca6634d195914016) | The x coordinate.
`public float `[`y`](#struct_r_m_l_1_1_vector3_d_1a967dbb984259d52bc299e9c145ccb59b) | The y coordinate.
`public float `[`z`](#struct_r_m_l_1_1_vector3_d_1aa01bf2be80215c0a25e2c6cad6349767) | The z coordinate.
`public  `[`Vector3D`](#struct_r_m_l_1_1_vector3_d_1a6b8c12f17d045c8a43b674ebec7190fe)`()` | Default constructor.
`public  `[`Vector3D`](#struct_r_m_l_1_1_vector3_d_1a9bc8a46ea59896d0bdc1048f7bcd1a3d)`(const float & x,const float & y,const float & z)` | Constructor.
`public float `[`getLength`](#struct_r_m_l_1_1_vector3_d_1a5e4222f3ef8a53a78903db74de855569)`(`[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector) const` | Gets length of vector.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`add`](#struct_r_m_l_1_1_vector3_d_1ae490026de2bc1c7c69543686d5677d33)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Adds other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`subtract`](#struct_r_m_l_1_1_vector3_d_1a5831741dc88ac4abba376953c37c760b)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Subtracts the given other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiply`](#struct_r_m_l_1_1_vector3_d_1a8b30fe6010364d9f7c0a9f70d79cd763)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Multiplies the given other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`divide`](#struct_r_m_l_1_1_vector3_d_1a15ac875f67d72fba4edc3e92432fd5a5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Divides the given other. Returns [a/x , b/y , c/z] if [a , b , c] is divided by [x , y , z].
`public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a048a3d9ed505aee2e637117036d23d43)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Equality operator.
`public bool `[`operator!=`](#struct_r_m_l_1_1_vector3_d_1a8bd28d3db1f8d6ddf6d578b6f6be40a9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Inequality operator.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector3_d_1aa4132db4ccf37586c84e4dab071085e5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Addition assignment operator.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector3_d_1a7267d6915bb2b74d41c0a06d24ce9ef9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Subtraction assignment operator.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector3_d_1a9036303c0ed8d11f739d1757da352c91)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Multiplication assignment operator.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector3_d_1a4bf33c2319ba86127295fdbf0f4ee7b9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Division assignment operator.

## Members

#### `public float `[`x`](#struct_r_m_l_1_1_vector3_d_1a6a44f9334ebb4ae0ca6634d195914016) 

The x coordinate.

#### `public float `[`y`](#struct_r_m_l_1_1_vector3_d_1a967dbb984259d52bc299e9c145ccb59b) 

The y coordinate.

#### `public float `[`z`](#struct_r_m_l_1_1_vector3_d_1aa01bf2be80215c0a25e2c6cad6349767) 

The z coordinate.

#### `public  `[`Vector3D`](#struct_r_m_l_1_1_vector3_d_1a6b8c12f17d045c8a43b674ebec7190fe)`()` 

Default constructor.

#### `public  `[`Vector3D`](#struct_r_m_l_1_1_vector3_d_1a9bc8a46ea59896d0bdc1048f7bcd1a3d)`(const float & x,const float & y,const float & z)` 

Constructor.

#### Parameters
* `x` The x coordinate. 

* `y` The y coordinate. 

* `z` The z coordinate.

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector3_d_1a5e4222f3ef8a53a78903db74de855569)`(`[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector) const` 

Gets length of vector.

#### Parameters
* `vector` The vector.

#### Returns
The length.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`add`](#struct_r_m_l_1_1_vector3_d_1ae490026de2bc1c7c69543686d5677d33)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Adds other.

#### Parameters
* `other` The other to add.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`subtract`](#struct_r_m_l_1_1_vector3_d_1a5831741dc88ac4abba376953c37c760b)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Subtracts the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiply`](#struct_r_m_l_1_1_vector3_d_1a8b30fe6010364d9f7c0a9f70d79cd763)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Multiplies the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`divide`](#struct_r_m_l_1_1_vector3_d_1a15ac875f67d72fba4edc3e92432fd5a5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Divides the given other. Returns [a/x , b/y , c/z] if [a , b , c] is divided by [x , y , z].

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a048a3d9ed505aee2e637117036d23d43)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Equality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are considered equivalent.

#### `public bool `[`operator!=`](#struct_r_m_l_1_1_vector3_d_1a8bd28d3db1f8d6ddf6d578b6f6be40a9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Inequality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are not considered equivalent.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector3_d_1aa4132db4ccf37586c84e4dab071085e5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Addition assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector3_d_1a7267d6915bb2b74d41c0a06d24ce9ef9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Subtraction assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector3_d_1a9036303c0ed8d11f739d1757da352c91)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Multiplication assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector3_d_1a4bf33c2319ba86127295fdbf0f4ee7b9)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Division assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

# struct `RML::Vector4D` 

A vector in 4d.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`x`](#struct_r_m_l_1_1_vector4_d_1adcb520477d39fd0f1d4d60e53ce6d85a) | The x coordinate.
`public float `[`y`](#struct_r_m_l_1_1_vector4_d_1a14cae581494b8c58f1721a41ff9c95f5) | The y coordinate.
`public float `[`z`](#struct_r_m_l_1_1_vector4_d_1a6523108955901df4b77ea5f7527b8d4a) | The z coordinate.
`public float `[`w`](#struct_r_m_l_1_1_vector4_d_1a93ab2b98d896c89315742cbb3fcb0ef6) | The w coordinate.
`public  `[`Vector4D`](#struct_r_m_l_1_1_vector4_d_1abb8dcf2e1a1a32030144a5784385b399)`() = default` | Default constructor.
`public  `[`Vector4D`](#struct_r_m_l_1_1_vector4_d_1a7c599849961d43002f26db7e888c8662)`(const float & x,const float & y,const float & z,const float & w)` | Constructor.
`public float `[`getLength`](#struct_r_m_l_1_1_vector4_d_1a74373f069530627f194e5bba0a23ae3b)`(`[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & vector) const` | Gets length of vector.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`normaliseToRGBA`](#struct_r_m_l_1_1_vector4_d_1af5bc24e9eaa6c52c1a793755421eddf9)`()` | Normalise color values to OpenGL supporting RGBA. Eg. (128, 128, 128, 255) => (0.5f, 0.5f, 0.5f, 1.0f)
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`add`](#struct_r_m_l_1_1_vector4_d_1a19da676c402114eca6556022cbf77aab)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Adds other.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`subtract`](#struct_r_m_l_1_1_vector4_d_1ae643fc3223a85b3c5b4b8f81298c7244)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Subtracts the given other.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`multiply`](#struct_r_m_l_1_1_vector4_d_1a0793689cb56a292f64094bee02dea911)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Multiplies the given other.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`divide`](#struct_r_m_l_1_1_vector4_d_1a9fc886cda50726d946fd1b6c50da16c6)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Divides the given other. Returns [a/x , b/y , c/z , d/w] if [a , b , c , d] is divided by [x , y , z , w].
`public bool `[`operator==`](#struct_r_m_l_1_1_vector4_d_1ad793560a0cd4c6f7af5e355b67b33994)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Equality operator.
`public bool `[`operator!=`](#struct_r_m_l_1_1_vector4_d_1ac9bd0fc89969166c40590677e239a293)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Inequality operator.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector4_d_1a96d924fa33e8d53b09c323410ba62c49)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Addition assignment operator.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector4_d_1acc5af278f7b72faefb812d9cec641323)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Subtraction assignment operator.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector4_d_1a9e708a9b84793d8ad7a62ffc83a94616)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Multiplication assignment operator.
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector4_d_1a7f2df730c80c82f0c7d81bdac3d5e340)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` | Division assignment operator.

## Members

#### `public float `[`x`](#struct_r_m_l_1_1_vector4_d_1adcb520477d39fd0f1d4d60e53ce6d85a) 

The x coordinate.

#### `public float `[`y`](#struct_r_m_l_1_1_vector4_d_1a14cae581494b8c58f1721a41ff9c95f5) 

The y coordinate.

#### `public float `[`z`](#struct_r_m_l_1_1_vector4_d_1a6523108955901df4b77ea5f7527b8d4a) 

The z coordinate.

#### `public float `[`w`](#struct_r_m_l_1_1_vector4_d_1a93ab2b98d896c89315742cbb3fcb0ef6) 

The w coordinate.

#### `public  `[`Vector4D`](#struct_r_m_l_1_1_vector4_d_1abb8dcf2e1a1a32030144a5784385b399)`() = default` 

Default constructor.

#### `public  `[`Vector4D`](#struct_r_m_l_1_1_vector4_d_1a7c599849961d43002f26db7e888c8662)`(const float & x,const float & y,const float & z,const float & w)` 

Constructor.

#### Parameters
* `x` The x coordinate. 

* `y` The y coordinate. 

* `z` The z coordinate. 

* `w` The w coordinate.

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector4_d_1a74373f069530627f194e5bba0a23ae3b)`(`[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & vector) const` 

Gets length of vector.

#### Parameters
* `vector` The vector.

#### Returns
The length.

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`normaliseToRGBA`](#struct_r_m_l_1_1_vector4_d_1af5bc24e9eaa6c52c1a793755421eddf9)`()` 

Normalise color values to OpenGL supporting RGBA. Eg. (128, 128, 128, 255) => (0.5f, 0.5f, 0.5f, 1.0f)

#### Returns
Color [Vector4D](#struct_r_m_l_1_1_vector4_d) with normalised values

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`add`](#struct_r_m_l_1_1_vector4_d_1a19da676c402114eca6556022cbf77aab)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Adds other.

#### Parameters
* `other` The other to add.

#### Returns
A reference to a [Vector4D](#struct_r_m_l_1_1_vector4_d).

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`subtract`](#struct_r_m_l_1_1_vector4_d_1ae643fc3223a85b3c5b4b8f81298c7244)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Subtracts the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector4D](#struct_r_m_l_1_1_vector4_d).

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`multiply`](#struct_r_m_l_1_1_vector4_d_1a0793689cb56a292f64094bee02dea911)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Multiplies the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector4D](#struct_r_m_l_1_1_vector4_d).

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`divide`](#struct_r_m_l_1_1_vector4_d_1a9fc886cda50726d946fd1b6c50da16c6)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Divides the given other. Returns [a/x , b/y , c/z , d/w] if [a , b , c , d] is divided by [x , y , z , w].

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector4D](#struct_r_m_l_1_1_vector4_d).

#### `public bool `[`operator==`](#struct_r_m_l_1_1_vector4_d_1ad793560a0cd4c6f7af5e355b67b33994)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Equality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are considered equivalent.

#### `public bool `[`operator!=`](#struct_r_m_l_1_1_vector4_d_1ac9bd0fc89969166c40590677e239a293)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Inequality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are not considered equivalent.

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector4_d_1a96d924fa33e8d53b09c323410ba62c49)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Addition assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator-=`](#struct_r_m_l_1_1_vector4_d_1acc5af278f7b72faefb812d9cec641323)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Subtraction assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator*=`](#struct_r_m_l_1_1_vector4_d_1a9e708a9b84793d8ad7a62ffc83a94616)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Multiplication assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`operator/=`](#struct_r_m_l_1_1_vector4_d_1a7f2df730c80c82f0c7d81bdac3d5e340)`(const `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & other)` 

Division assignment operator.

#### Parameters
* `other` The other.

#### Returns
The result of the operation.

# namespace `Rubeus` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)            | Defines all message codes the game requires.
`enum `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a)            | Defines audio commands allowed to send to the audio manager.
`class `[`Rubeus::RMasterComponent`](#class_rubeus_1_1_r_master_component) | 
`class `[`Rubeus::RMessageBus`](#class_rubeus_1_1_r_message_bus) | 
`class `[`Rubeus::RMessageSystem`](#class_rubeus_1_1_r_message_system) | A message system class that handles message posting and adding.
`struct `[`Rubeus::AudioModifier`](#struct_rubeus_1_1_audio_modifier) | Custom POD structure to be sent with messages as audio commands.
`struct `[`Rubeus::Message`](#struct_rubeus_1_1_message) | Declares the message objects that systems use to communicate.

## Members

#### `enum `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
system_ok            | 
change_window_title            | 
load_image            | 
get_loaded_image            | 
modify_audio            | 

Defines all message codes the game requires.

#### `enum `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
fade_out            | 
fade_in            | 

Defines audio commands allowed to send to the audio manager.

# class `Rubeus::RMasterComponent` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RMasterComponent`](#class_rubeus_1_1_r_master_component_1aecd982f5c7361dbb23bcc8ac5ec6481c)`()` | 
`public virtual  `[`~RMasterComponent`](#class_rubeus_1_1_r_master_component_1a3ee1666371bfafadd5f3adfa67ac874c)`()` | 
`public void `[`remove`](#class_rubeus_1_1_r_master_component_1a100b8cb3b0bfb25c090d2c9e7777a641)`()` | Removes this component from component table.
`public unsigned int `[`getComponentID`](#class_rubeus_1_1_r_master_component_1ada4b85021d96ac2c2153e613d5f14097)`() const` | 
`public inline std::string `[`getName`](#class_rubeus_1_1_r_master_component_1ad3c9003c4bc64661ed9ae5961c8cf3fa)`()` | Gets the fully qualified name of this component.
`public virtual void `[`onMessage`](#class_rubeus_1_1_r_master_component_1a129a5b04db723423b40cfd4780adcd35)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles message from messaging system.
`protected unsigned int `[`m_ComponentID`](#class_rubeus_1_1_r_master_component_1a838bceba7935bb3b11a5b69def0f0fc0) | Identifier for this component.
`protected void `[`add`](#class_rubeus_1_1_r_master_component_1a6be44507ef5a2ffb653016729661b416)`()` | Adds this component to component table.

## Members

#### `public  `[`RMasterComponent`](#class_rubeus_1_1_r_master_component_1aecd982f5c7361dbb23bcc8ac5ec6481c)`()` 

#### `public virtual  `[`~RMasterComponent`](#class_rubeus_1_1_r_master_component_1a3ee1666371bfafadd5f3adfa67ac874c)`()` 

#### `public void `[`remove`](#class_rubeus_1_1_r_master_component_1a100b8cb3b0bfb25c090d2c9e7777a641)`()` 

Removes this component from component table.

#### `public unsigned int `[`getComponentID`](#class_rubeus_1_1_r_master_component_1ada4b85021d96ac2c2153e613d5f14097)`() const` 

#### `public inline std::string `[`getName`](#class_rubeus_1_1_r_master_component_1ad3c9003c4bc64661ed9ae5961c8cf3fa)`()` 

Gets the fully qualified name of this component.

#### Returns
The name.

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_r_master_component_1a129a5b04db723423b40cfd4780adcd35)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

Handles message from messaging system.

Not intended to be used by the user, it may be overriden by child classes

#### Parameters
* `msg` The message object received.

#### `protected unsigned int `[`m_ComponentID`](#class_rubeus_1_1_r_master_component_1a838bceba7935bb3b11a5b69def0f0fc0) 

Identifier for this component.

#### `protected void `[`add`](#class_rubeus_1_1_r_master_component_1a6be44507ef5a2ffb653016729661b416)`()` 

Adds this component to component table.

# class `Rubeus::RMessageBus` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::vector< `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * > `[`m_Systems`](#class_rubeus_1_1_r_message_bus_1aa48f8d44b62e33ce789acf028d4ed267) | Array of systems participating in message communication.
`public std::vector< `[`Message`](#struct_rubeus_1_1_message)` * > `[`m_MessageQueue`](#class_rubeus_1_1_r_message_bus_1a912614d17e909bb9deed7f7ccdb8e20e) | Vector array of synchronous messages to be sent.
`public  `[`RMessageBus`](#class_rubeus_1_1_r_message_bus_1a44b2eda2ed71693db3aa77370e6a4206)`()` | Constructor.
`public  `[`~RMessageBus`](#class_rubeus_1_1_r_message_bus_1a68ba53f79ff996a23958ffafe04e1b26)`()` | Destructor.
`public void `[`addSystem`](#class_rubeus_1_1_r_message_bus_1a193a8085ccba53a0318a1ac1375008db)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * system)` | Adds a system to receive commands via messages.
`public void `[`post`](#class_rubeus_1_1_r_message_bus_1acb29ca3d37aa536cee094fcfdb8ac787)`(`[`Message`](#struct_rubeus_1_1_message)` * message)` | Post a message to be sent in the next frame.
`public `[`Message`](#struct_rubeus_1_1_message)` * `[`pop`](#class_rubeus_1_1_r_message_bus_1af65073dff38f98ce5cc8ea8042cdc28f)`()` | Returns the last message on the message array after popping it.

## Members

#### `public std::vector< `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * > `[`m_Systems`](#class_rubeus_1_1_r_message_bus_1aa48f8d44b62e33ce789acf028d4ed267) 

Array of systems participating in message communication.

#### `public std::vector< `[`Message`](#struct_rubeus_1_1_message)` * > `[`m_MessageQueue`](#class_rubeus_1_1_r_message_bus_1a912614d17e909bb9deed7f7ccdb8e20e) 

Vector array of synchronous messages to be sent.

#### `public  `[`RMessageBus`](#class_rubeus_1_1_r_message_bus_1a44b2eda2ed71693db3aa77370e6a4206)`()` 

Constructor.

#### `public  `[`~RMessageBus`](#class_rubeus_1_1_r_message_bus_1a68ba53f79ff996a23958ffafe04e1b26)`()` 

Destructor.

#### `public void `[`addSystem`](#class_rubeus_1_1_r_message_bus_1a193a8085ccba53a0318a1ac1375008db)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * system)` 

Adds a system to receive commands via messages.

[Message](#struct_rubeus_1_1_message) bus doesn't take responsibility of deleting the system pointers. Do not pass in statically declared variables.

#### Parameters
* `system` A pointer to the system to be added.

#### `public void `[`post`](#class_rubeus_1_1_r_message_bus_1acb29ca3d37aa536cee094fcfdb8ac787)`(`[`Message`](#struct_rubeus_1_1_message)` * message)` 

Post a message to be sent in the next frame.

[Message](#struct_rubeus_1_1_message) system intends to take responsibility of passed in pointers, i.e. it deletes all message pointers on destruction. Do not delete message pointers that are passed in.

#### Parameters
* `message` The message pointer to be posted.

#### `public `[`Message`](#struct_rubeus_1_1_message)` * `[`pop`](#class_rubeus_1_1_r_message_bus_1af65073dff38f98ce5cc8ea8042cdc28f)`()` 

Returns the last message on the message array after popping it.

Do not use freely.

# class `Rubeus::RMessageSystem` 

A message system class that handles message posting and adding.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`evaluateMessages`](#class_rubeus_1_1_r_message_system_1af27c32001557d581e8160ca18d547dce)`()` | Pops messages from the message queue and sends them to their respective destinations.
`public void `[`addMessage`](#class_rubeus_1_1_r_message_system_1a45cc05c73a0c3b90964690607ccd0847)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * sender,`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * receiver,`[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` type,var data)` | Adds a message to the message queue.

## Members

#### `public void `[`evaluateMessages`](#class_rubeus_1_1_r_message_system_1af27c32001557d581e8160ca18d547dce)`()` 

Pops messages from the message queue and sends them to their respective destinations.

Use only once per frame

#### `public void `[`addMessage`](#class_rubeus_1_1_r_message_system_1a45cc05c73a0c3b90964690607ccd0847)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * sender,`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * receiver,`[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` type,var data)` 

Adds a message to the message queue.

#### Parameters
* `sender` Pointer to the sender. 

* `receiver` Pointer to the receiver. 

* `type` Type of message command. 

* `data` The data object to be sent. See 'var' typedef for transmittable data

# struct `Rubeus::AudioModifier` 

Custom POD structure to be sent with messages as audio commands.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`ETrackType`](#class_e_track_type)` `[`m_TrackToApplyTo`](#struct_rubeus_1_1_audio_modifier_1ac59581bd707514aebf799da20ff302a0) | Track type to use.
`public `[`ETrackName`](#class_e_track_name)` `[`m_TrackName`](#struct_rubeus_1_1_audio_modifier_1ad2eb7a3c901111183b6a7c939e952dd4) | Track name (Track ID) to apply to.
`public `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a)` `[`m_EffectToApply`](#struct_rubeus_1_1_audio_modifier_1a82cbfe7aeaa656630f415fa83c7c3c96) | Effect to apply.

## Members

#### `public `[`ETrackType`](#class_e_track_type)` `[`m_TrackToApplyTo`](#struct_rubeus_1_1_audio_modifier_1ac59581bd707514aebf799da20ff302a0) 

Track type to use.

#### `public `[`ETrackName`](#class_e_track_name)` `[`m_TrackName`](#struct_rubeus_1_1_audio_modifier_1ad2eb7a3c901111183b6a7c939e952dd4) 

Track name (Track ID) to apply to.

#### `public `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a)` `[`m_EffectToApply`](#struct_rubeus_1_1_audio_modifier_1a82cbfe7aeaa656630f415fa83c7c3c96) 

Effect to apply.

# struct `Rubeus::Message` 

Declares the message objects that systems use to communicate.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * `[`m_Sender`](#struct_rubeus_1_1_message_1ac29ca5025880b9a77297d7f54eae815e) | The sender's address.
`public `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * `[`m_Receiver`](#struct_rubeus_1_1_message_1a8349daaa98ce0a45f42d457430748347) | The receiver's address.
`public `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` `[`m_Type`](#struct_rubeus_1_1_message_1ae4bf54f564c9a4803be37d341313e157) | The type of this message.
`public var `[`m_Data`](#struct_rubeus_1_1_message_1a4ebdd7a1445d43bb44cfe4c10fef4988) | The data union to be sent with this message.
`public  `[`Message`](#struct_rubeus_1_1_message_1aff3ce9330654214b79baa908d37e7b7a)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * sender,`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * receiver,`[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` type,var data)` | Constructor.
`public  `[`~Message`](#struct_rubeus_1_1_message_1a80f0a41ca48055eaa6143d413325097e)`()` | Destructor.

## Members

#### `public `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * `[`m_Sender`](#struct_rubeus_1_1_message_1ac29ca5025880b9a77297d7f54eae815e) 

The sender's address.

#### `public `[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * `[`m_Receiver`](#struct_rubeus_1_1_message_1a8349daaa98ce0a45f42d457430748347) 

The receiver's address.

#### `public `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` `[`m_Type`](#struct_rubeus_1_1_message_1ae4bf54f564c9a4803be37d341313e157) 

The type of this message.

#### `public var `[`m_Data`](#struct_rubeus_1_1_message_1a4ebdd7a1445d43bb44cfe4c10fef4988) 

The data union to be sent with this message.

#### `public  `[`Message`](#struct_rubeus_1_1_message_1aff3ce9330654214b79baa908d37e7b7a)`(`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * sender,`[`RMasterComponent`](#class_rubeus_1_1_r_master_component)` * receiver,`[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)` type,var data)` 

Constructor.

#### Parameters
* `sender` The sender's address. 

* `receiver` The receiver's address. 

* `type` The type of message. 

* `data` The data to be transmitted.

#### `public  `[`~Message`](#struct_rubeus_1_1_message_1a80f0a41ca48055eaa6143d413325097e)`()` 

Destructor.

# namespace `Rubeus::AudioComponents` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ETrackName`](#audio__manager__component_8h_1acbf366d079fc45406adacdb082972fee)            | 
`enum `[`ETrackType`](#audio__manager__component_8h_1ad1a7dad8a7e738a5f47a03a37cd7e815)            | 
`class `[`Rubeus::AudioComponents::RAudioManager`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager) | Manages audio loading, cueing and audio effects.

## Members

#### `enum `[`ETrackName`](#audio__manager__component_8h_1acbf366d079fc45406adacdb082972fee) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
TRACK_0            | 
TRACK_1            | 
TRACK_2            | 
TRACK_3            | 
TRACK_4            | 
TRACK_5            | 
TRACK_6            | 
TRACK_7            | 
TRACK_8            | 
TRACK_9            | 
TRACK_10            | 
TRACK_11            | 
TRACK_12            | 
TRACK_13            | 
TRACK_14            | 
TRACK_15            | 
TRACK_16            | 
TRACK_17            | 
TRACK_18            | 
TRACK_19            | 

#### `enum `[`ETrackType`](#audio__manager__component_8h_1ad1a7dad8a7e738a5f47a03a37cd7e815) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
SOUND_TRACK            | 
MUSIC_TRACK            | 

# class `Rubeus::AudioComponents::RAudioManager` 

```
class Rubeus::AudioComponents::RAudioManager
  : public Rubeus::RMasterComponent
```  

Manages audio loading, cueing and audio effects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RAudioManager`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a3a3334e88c12ab37a528836e8816c948)`()` | Constructor.
`public  `[`~RAudioManager`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a2e8033d3a03f79641e164408935bb72b)`()` | Destructor.
`public void `[`addSoundTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a68463b7b420105eda83558eb5b5da636)`(const int count)` | Adds sound tracks to be used later to load sound effect files.
`public void `[`addMusicTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1aa38c4cdfe8dab691c7b8c1fa409fb9c5)`(const int count)` | Adds music tracks to be used later to play music.
`public void `[`loadTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a088cb264a5c05d3a3e0d75aee3e4ebce)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,std::string filePath,float volume,bool loopEnabled)` | Load an audio file to a music track.
`public void `[`playTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1ab5acf35fe816cd1d342aee596bdb11a2)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Play a track.
`public void `[`pauseTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a87bb23c39c80e6847f2ef8bdab31e815)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Pause a track.
`public void `[`stopTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a39f47a1b9da23a07158ca4f16cb2d142)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Stop a track.
`public void `[`stepDownMusicVolume`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a6a0f66dbee2db1136733ae9e74152998)`(const float duration,const float floorVolume)` | Steps down the volume.
`public void `[`setVolume`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1adfe98514be3b55f19e2c28ea9c2d1a45)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float volume)` | Sets the volume for a track.
`public void `[`setPitch`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a798e58f873fea491f662c1270df03b80)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float pitch)` | Sets the pitch for a track.
`public void `[`addToTick`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a19d8e3b566e39f72ca60ae3f3ea1d170)`(void(*)() function)` | Adds a function to be ticked by the audio manager.
`public void `[`tick`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a860f2dc255cbd6ccf755657a10b66f4f)`()` | Ticks the tickable functions added to audio manager.
`protected virtual void `[`onMessage`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a64d2cd1db1da5762413b34711f7c1185)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | [Message](#struct_rubeus_1_1_message) handler for audio manager.

## Members

#### `public  `[`RAudioManager`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a3a3334e88c12ab37a528836e8816c948)`()` 

Constructor.

#### `public  `[`~RAudioManager`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a2e8033d3a03f79641e164408935bb72b)`()` 

Destructor.

#### `public void `[`addSoundTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a68463b7b420105eda83558eb5b5da636)`(const int count)` 

Adds sound tracks to be used later to load sound effect files.

Keep track of how many tracks are actually needed

#### Parameters
* `count` The number of tracks to be constructed.

#### `public void `[`addMusicTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1aa38c4cdfe8dab691c7b8c1fa409fb9c5)`(const int count)` 

Adds music tracks to be used later to play music.

Keep track of how many tracks are actually needed

#### Parameters
* `count` The number of tracks to be constructed.

#### `public void `[`loadTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a088cb264a5c05d3a3e0d75aee3e4ebce)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,std::string filePath,float volume,bool loopEnabled)` 

Load an audio file to a music track.

Default volume is 50.0f (max volume is 100.0f)

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK 

* `trackName` Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `filePath` Path to the sound file 

* `volume` Volume to be set. Default is 50 

* `loopEnabled` Whether the music should loop when it ends. Default is false.

#### `public void `[`playTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1ab5acf35fe816cd1d342aee596bdb11a2)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Play a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`pauseTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a87bb23c39c80e6847f2ef8bdab31e815)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Pause a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`stopTrack`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a39f47a1b9da23a07158ca4f16cb2d142)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Stop a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`stepDownMusicVolume`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a6a0f66dbee2db1136733ae9e74152998)`(const float duration,const float floorVolume)` 

Steps down the volume.

Used only for fade outs/fade ins

#### Parameters
* `duration` Duration of fade effect. 

* `floorVolume` Volume to stop the fade effect at.

#### `public void `[`setVolume`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1adfe98514be3b55f19e2c28ea9c2d1a45)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float volume)` 

Sets the volume for a track.

Volume ranges from 0.0f to 100.0f

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `volume` The volume to set to.

#### `public void `[`setPitch`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a798e58f873fea491f662c1270df03b80)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float pitch)` 

Sets the pitch for a track.

Default pitch is 1. Changing pitch also affects the audio duration

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `pitch` The pitch to set to.

#### `public void `[`addToTick`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a19d8e3b566e39f72ca60ae3f3ea1d170)`(void(*)() function)` 

Adds a function to be ticked by the audio manager.

Type_a_warning_with_its_use

#### Parameters
* `function` Function pointer to be woken up at tick.

#### `public void `[`tick`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a860f2dc255cbd6ccf755657a10b66f4f)`()` 

Ticks the tickable functions added to audio manager.

#### `protected virtual void `[`onMessage`](#class_rubeus_1_1_audio_components_1_1_r_audio_manager_1a64d2cd1db1da5762413b34711f7c1185)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

[Message](#struct_rubeus_1_1_message) handler for audio manager.

To be used by the message system only

#### Parameters
* `msg` Pointer to the message received.

# namespace `Rubeus::GraphicComponents` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)            | Values that represent window parameters. Use while constructing a [RWindowComponent](#class_rubeus_1_1_graphic_components_1_1_r_window_component) object.
`public void `[`cursorPositionCallback`](#input__component_8h_1addd22d20d9c596d67d4cce1380370aba)`(GLFWwindow * window,double xpos,double ypos)`            | 
`public void `[`mouseButtonCallback`](#input__component_8h_1aaf029039346532121afb3b2c1a553f12)`(GLFWwindow * window,int button,int action,int mods)`            | 
`public void `[`scrollCallback`](#input__component_8h_1aa164ff0472b9d6dfd38a3b39080703f9)`(GLFWwindow * window,double xoffset,double yoffset)`            | 
`public void `[`keyCallback`](#input__component_8h_1ae3b18f62b7bacca1216ec789a7e46f89)`(GLFWwindow * window,int key,int scancode,int action,int mods)`            | 
`public void `[`getGLFWErrorLog`](#window__component_8h_1ae977f0dca420926193fd5c7cd465baf0)`(int error,const char * description)`            | Gets GLFW error logs.
`class `[`Rubeus::GraphicComponents::RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer) | A buffer class that handles generating and binding OpenGL buffers.
`class `[`Rubeus::GraphicComponents::RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group) | 
`class `[`Rubeus::GraphicComponents::RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component) | A guerrilla renderer component. Made for increased performance. Default renderer. Use instead of simple renderer.
`class `[`Rubeus::GraphicComponents::RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer) | A buffer class that handles generating and binding OpenGL index buffers.
`class `[`Rubeus::GraphicComponents::RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer) | A layer class. Manages layer renders and groups.
`class `[`Rubeus::GraphicComponents::RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object) | A renderable object. Allows specifying the position, size and color of the renderable object.
`class `[`Rubeus::GraphicComponents::RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component) | A renderer component abstraction.
`class `[`Rubeus::GraphicComponents::RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component) | 
`class `[`Rubeus::GraphicComponents::RSimpleRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component) | A simple renderer. Only for testing purposes.
`class `[`Rubeus::GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite) | A sprite compatible with guerrilla renderer.
`class `[`Rubeus::GraphicComponents::RStaticLayer`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer) | Allows a static layer of groups of objects to be drawn on the screen.
`class `[`Rubeus::GraphicComponents::RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite) | A static sprite.
`class `[`Rubeus::GraphicComponents::RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture) | A texture class containing all OpenGL abstractions for implementing textures.
`class `[`Rubeus::GraphicComponents::RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array) | A vertex array class that handles vertex and index buffer bindings.
`class `[`Rubeus::GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component) | A window component that bridges GLFW function calls to handle Rubeus game window.
`struct `[`Rubeus::GraphicComponents::Image`](#struct_rubeus_1_1_graphic_components_1_1_image) | A collection of the image data and its features.
`struct `[`Rubeus::GraphicComponents::VertexData`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data) | A structure holding vertex data to be sent to OpenGL.

## Members

#### `enum `[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
WINDOWED_MODE            | 
FULLSCREEN_MODE            | 
NON_RESIZABLE_WINDOW            | 
RESIZABLE_WINDOW            | 

Values that represent window parameters. Use while constructing a [RWindowComponent](#class_rubeus_1_1_graphic_components_1_1_r_window_component) object.

#### `public void `[`cursorPositionCallback`](#input__component_8h_1addd22d20d9c596d67d4cce1380370aba)`(GLFWwindow * window,double xpos,double ypos)` 

#### `public void `[`mouseButtonCallback`](#input__component_8h_1aaf029039346532121afb3b2c1a553f12)`(GLFWwindow * window,int button,int action,int mods)` 

#### `public void `[`scrollCallback`](#input__component_8h_1aa164ff0472b9d6dfd38a3b39080703f9)`(GLFWwindow * window,double xoffset,double yoffset)` 

#### `public void `[`keyCallback`](#input__component_8h_1ae3b18f62b7bacca1216ec789a7e46f89)`(GLFWwindow * window,int key,int scancode,int action,int mods)` 

#### `public void `[`getGLFWErrorLog`](#window__component_8h_1ae977f0dca420926193fd5c7cd465baf0)`(int error,const char * description)` 

Gets GLFW error logs.

#### Parameters
* `error` The error. 

* `description` The description.

# class `Rubeus::GraphicComponents::RBuffer` 

A buffer class that handles generating and binding OpenGL buffers.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a613ca2ff7c61ccb4e3e9dbd2d1e66942)`(GLfloat * data,GLsizei count,GLuint elementCount)` | Constructor. Generates a buffer object and applies its layout.
`public  `[`~RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a2afa37e252a1e7390debf1d1eb688ad7)`()` | Destructor.
`public void `[`bindBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a033648201e56123a0955e17d88a0d536)`() const` | Binds this buffer.
`public void `[`unbindBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a2a7194f58766bd546dee81a72c1e96e3)`() const` | Unbinds buffer.
`public inline GLuint `[`getElementCount`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a0e710825f166d31840579c5f549dd2cd)`()` | Gets number of elements in this buffer.

## Members

#### `public  `[`RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a613ca2ff7c61ccb4e3e9dbd2d1e66942)`(GLfloat * data,GLsizei count,GLuint elementCount)` 

Constructor. Generates a buffer object and applies its layout.

#### Parameters
* `data` If non-null, the data. 

* `count` Number of total units of data values. 

* `elementCount` Number of elements.

#### `public  `[`~RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a2afa37e252a1e7390debf1d1eb688ad7)`()` 

Destructor.

#### `public void `[`bindBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a033648201e56123a0955e17d88a0d536)`() const` 

Binds this buffer.

#### `public void `[`unbindBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a2a7194f58766bd546dee81a72c1e96e3)`() const` 

Unbinds buffer.

#### `public inline GLuint `[`getElementCount`](#class_rubeus_1_1_graphic_components_1_1_r_buffer_1a0e710825f166d31840579c5f549dd2cd)`()` 

Gets number of elements in this buffer.

#### Returns
The element count.

# class `Rubeus::GraphicComponents::RGroup` 

```
class Rubeus::GraphicComponents::RGroup
  : public Rubeus::GraphicComponents::RRenderableObject
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::vector< const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * > `[`m_Renderables`](#class_rubeus_1_1_graphic_components_1_1_r_group_1ad428db00b3025d157b6aab5dd457c98b) | Vector array of renderables.
`public  `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a34b62e8d249e2fd552c3a4333072d593)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & transform)` | Constructor.
`public  `[`~RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a65a59f0752a6b2633a1beee72944cc18)`()` | Destructor.
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_group_1afba570254211098554f5975619c28ec8)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` | Submit the group to a renderer queue.
`public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a3075ef3980ed768f25fe6638cb1b49f0)`(`[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` | Adds the renderable object as the children of this object.

## Members

#### `public std::vector< const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * > `[`m_Renderables`](#class_rubeus_1_1_graphic_components_1_1_r_group_1ad428db00b3025d157b6aab5dd457c98b) 

Vector array of renderables.

#### `public  `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a34b62e8d249e2fd552c3a4333072d593)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & transform)` 

Constructor.

#### Parameters
* `tranform` The tranform that places the contents of this group.

#### `public  `[`~RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a65a59f0752a6b2633a1beee72944cc18)`()` 

Destructor.

#### `public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_group_1afba570254211098554f5975619c28ec8)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` 

Submit the group to a renderer queue.

#### Parameters
* `renderer` The renderer to send the group contents to.

#### `public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a3075ef3980ed768f25fe6638cb1b49f0)`(`[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` 

Adds the renderable object as the children of this object.

Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.

#### Parameters
* `renderable` The renderable object.

#### Returns
Reference to this group object. Allows chaining [add()](#class_rubeus_1_1_graphic_components_1_1_r_group_1a3075ef3980ed768f25fe6638cb1b49f0) calls. E.g. group.add(r1).add(r2);

# class `Rubeus::GraphicComponents::RGuerrillaRendererComponent` 

```
class Rubeus::GraphicComponents::RGuerrillaRendererComponent
  : public Rubeus::GraphicComponents::RRendererComponent
```  

A guerrilla renderer component. Made for increased performance. Default renderer. Use instead of simple renderer.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1af9e0e96ea0cb6cd0b85e224874ad6895)`()` | Default constructor.
`public  `[`~RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a03ebed59b19573fc643ee8798f4976ef)`()` | Destructor.
`public void `[`begin`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ad1b3394c276176809806b3ead922e7de)`()` | Begins the rendering task.
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ac92a8fe8646e1e60726f7b351da187fb)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` | Submits the given renderable object.
`public void `[`end`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a2295e5dc98292550b39a62b8007703aa)`()` | Ends the rendering task.
`public virtual void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a4f2e53fb66f530afedc4180568e61c6c)`()` | Flushes the render objects.
`public virtual void `[`push`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ab8c526a011fafe6019f9e959468d3559)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` | Push matrix into render transformation matrix stack.
`public virtual void `[`pushOverride`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ad6f89209b2f16b8b0d43ca104cf5ad49)`(`[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` | Push matrix into render transformation matrix stack.
`public virtual void `[`pop`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ac759da23f42f09c56aa62a4895a1728b)`()` | Pop a matrix from the render stack.

## Members

#### `public  `[`RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1af9e0e96ea0cb6cd0b85e224874ad6895)`()` 

Default constructor.

#### `public  `[`~RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a03ebed59b19573fc643ee8798f4976ef)`()` 

Destructor.

#### `public void `[`begin`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ad1b3394c276176809806b3ead922e7de)`()` 

Begins the rendering task.

#### `public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ac92a8fe8646e1e60726f7b351da187fb)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` 

Submits the given renderable object.

#### Parameters
* `renderable` The renderable.

#### `public void `[`end`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a2295e5dc98292550b39a62b8007703aa)`()` 

Ends the rendering task.

#### `public virtual void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1a4f2e53fb66f530afedc4180568e61c6c)`()` 

Flushes the render objects.

#### `public virtual void `[`push`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ab8c526a011fafe6019f9e959468d3559)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` 

Push matrix into render transformation matrix stack.

#### Parameters
* `matrix` The matrix to add.

#### `public virtual void `[`pushOverride`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ad6f89209b2f16b8b0d43ca104cf5ad49)`(`[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` 

Push matrix into render transformation matrix stack.

#### Parameters
* `matrix` The matrix to add.

#### `public virtual void `[`pop`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component_1ac759da23f42f09c56aa62a4895a1728b)`()` 

Pop a matrix from the render stack.

Avoid excessive popping.

# class `Rubeus::GraphicComponents::RIndexBuffer` 

A buffer class that handles generating and binding OpenGL index buffers.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a9a319bc70052def3549b0b2f8f2627db)`(GLushort * data,GLsizei count)` | Constructor. Generates a buffer object and applies its layout.
`public  `[`~RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1ab322e9b3e89f3074aa1cfc82f6efaf18)`()` | Destructor.
`public void `[`bindIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a6cbcbc12451956af91cbd28851b600b1)`() const` | Binds this index buffer.
`public void `[`unbindIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a2233237242db5414de99e479884d9600)`() const` | Unbinds this index buffer.
`public inline GLuint `[`getIndexCount`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a1393da955cf677f9b76138403bfc4081)`()` | 

## Members

#### `public  `[`RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a9a319bc70052def3549b0b2f8f2627db)`(GLushort * data,GLsizei count)` 

Constructor. Generates a buffer object and applies its layout.

#### Parameters
* `data` If non-null, the data. 

* `count` Number of indices specified.

#### `public  `[`~RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1ab322e9b3e89f3074aa1cfc82f6efaf18)`()` 

Destructor.

#### `public void `[`bindIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a6cbcbc12451956af91cbd28851b600b1)`() const` 

Binds this index buffer.

#### `public void `[`unbindIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a2233237242db5414de99e479884d9600)`() const` 

Unbinds this index buffer.

#### `public inline GLuint `[`getIndexCount`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer_1a1393da955cf677f9b76138403bfc4081)`()` 

# class `Rubeus::GraphicComponents::RLayer` 

A layer class. Manages layer renders and groups.

Contains no remove group feature

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a53f1797a973a90568b5ad2e5a5fd3e1b)`() = default` | Default constructor.
`public virtual  `[`~RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a7ff5ad86d9ca6a2a3509689a19b68917)`() = default` | Destructor.
`public `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a5412320eee522831c6d48c85030cc0bd)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` | Adds a group object to this layer.
`public void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a1d3a0a6fc1caf1739dceec82d7d1d90c)`()` | Draw the complete layer.

## Members

#### `public  `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a53f1797a973a90568b5ad2e5a5fd3e1b)`() = default` 

Default constructor.

#### `public virtual  `[`~RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a7ff5ad86d9ca6a2a3509689a19b68917)`() = default` 

Destructor.

Virtual destructor

#### `public `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a5412320eee522831c6d48c85030cc0bd)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` 

Adds a group object to this layer.

No removal capability.

#### Parameters
* `group` The group object to pass in.

#### Returns
Reference to this layer. Provides chaining group additions. E.g. layer.addgroup(g1).addgroup(g2);

#### `public void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_layer_1a1d3a0a6fc1caf1739dceec82d7d1d90c)`()` 

Draw the complete layer.

Virtual function

# class `Rubeus::GraphicComponents::RRenderableObject` 

A renderable object. Allows specifying the position, size and color of the renderable object.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public unsigned int `[`m_ObjectID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a386b0ee3b6e0a3a673be6dedf0ab0cf2) | Identifier for the object.
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_Position`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a59bf6b1c361b304defb6108c59dd5889) | The position of the sprite.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Size`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a6e20a1bae4cb712cf40018313daeeb88) | The size of the sprite.
`public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`m_Color`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a9cbc037a6bf3dda6477d2fbb00dddc75) | The color of the sprite.
`public std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > `[`m_UV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a8ce71902e92e9fe8a932782fc8b0366d) | The UV/texture coordinates of the current texture being utilised.
`public `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * `[`m_Texture`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a4b1bdda7f4751a83973aabaab6c09ea4) | The texture alloted to this object.
`public  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a999a7fd55dd03809513cadd09dc59581)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` color)` | Constructor. Sets position, size, color of the sprite to be used for in the given shader.
`public virtual  `[`~RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a521bcff95a9ddd4dfd63e9d059dea3e5)`()` | Destructor.
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a54805529c6a3b5473918f7e46b20eddd)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` | Submit this object to a render queue.
`public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`getPosition`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a89dc97d0d5037e1602bec587a3aba786)`() const` | Gets the position.
`public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getSize`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aee29b6de589c14179b43bd0dcb517765)`() const` | Gets the size.
`public inline const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`getColor`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a27b261ef20f2e511e717d8f0d2518848)`() const` | Gets the color.
`public inline const std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > & `[`getUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a67c746390cad14ed636bc695da4fd0b4)`() const` | Returns the UV coords of the vertices.
`public inline const GLuint `[`getTextureID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aecc1218deec48c318f3f440d5958f662)`() const` | Returns the texture ID of the respective texture assigned.
`protected  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a71a90dda838f01c4a4a02d9d97013894)`()` | Constructor.
`protected inline void `[`setUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1af37b1e80d9c832c6c8e7ccc7337a90f8)`()` | Sets the default values for UV coords.

## Members

#### `public unsigned int `[`m_ObjectID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a386b0ee3b6e0a3a673be6dedf0ab0cf2) 

Identifier for the object.

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_Position`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a59bf6b1c361b304defb6108c59dd5889) 

The position of the sprite.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Size`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a6e20a1bae4cb712cf40018313daeeb88) 

The size of the sprite.

#### `public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`m_Color`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a9cbc037a6bf3dda6477d2fbb00dddc75) 

The color of the sprite.

#### `public std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > `[`m_UV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a8ce71902e92e9fe8a932782fc8b0366d) 

The UV/texture coordinates of the current texture being utilised.

#### `public `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * `[`m_Texture`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a4b1bdda7f4751a83973aabaab6c09ea4) 

The texture alloted to this object.

#### `public  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a999a7fd55dd03809513cadd09dc59581)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` color)` 

Constructor. Sets position, size, color of the sprite to be used for in the given shader.

#### Parameters
* `position` The position. 

* `size` The size. 

* `color` The color.

#### `public virtual  `[`~RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a521bcff95a9ddd4dfd63e9d059dea3e5)`()` 

Destructor.

#### `public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a54805529c6a3b5473918f7e46b20eddd)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` 

Submit this object to a render queue.

#### Parameters
* `renderer` The renderer to submit to.

#### `public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`getPosition`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a89dc97d0d5037e1602bec587a3aba786)`() const` 

Gets the position.

#### Returns
The position.

#### `public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getSize`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aee29b6de589c14179b43bd0dcb517765)`() const` 

Gets the size.

#### Returns
The size.

#### `public inline const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`getColor`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a27b261ef20f2e511e717d8f0d2518848)`() const` 

Gets the color.

#### Returns
The color.

#### `public inline const std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > & `[`getUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a67c746390cad14ed636bc695da4fd0b4)`() const` 

Returns the UV coords of the vertices.

#### Returns
Reference to a std::vector containing all UV Vector2Ds.

#### `public inline const GLuint `[`getTextureID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aecc1218deec48c318f3f440d5958f662)`() const` 

Returns the texture ID of the respective texture assigned.

#### Returns
The texture ID.

#### `protected  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a71a90dda838f01c4a4a02d9d97013894)`()` 

Constructor.

To be called only by child classes

#### `protected inline void `[`setUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1af37b1e80d9c832c6c8e7ccc7337a90f8)`()` 

Sets the default values for UV coords.

# class `Rubeus::GraphicComponents::RRendererComponent` 

```
class Rubeus::GraphicComponents::RRendererComponent
  : public Rubeus::RMasterComponent
```  

A renderer component abstraction.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a37606689bc45ed28e6282271ec7d175e)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` | Submits the given renderable object to render queue.
`public void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a21650be54782ac7fd98cd6fb650937d7)`()` | Flushes the render objects' queue after displaying them.
`public inline virtual void `[`push`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a9ec9a422aeb7e69635a36aaef668141b)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` | Push a tranform into the tranformation stack.
`public inline virtual void `[`pushOverride`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a731ea8a502134a13c059fa9ef1b9fc87)`(`[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` | Push a tranform into the tranformation stack, while disrespecting already present matrices/.
`public inline virtual void `[`pop`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1aba9f2cd2a076a88e9efe46d477a7ce4d)`()` | Pop and return a tranform from the tranformation stack.

## Members

#### `public void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a37606689bc45ed28e6282271ec7d175e)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` 

Submits the given renderable object to render queue.

#### Parameters
* `renderable` The renderable.

#### `public void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a21650be54782ac7fd98cd6fb650937d7)`()` 

Flushes the render objects' queue after displaying them.

#### `public inline virtual void `[`push`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a9ec9a422aeb7e69635a36aaef668141b)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` 

Push a tranform into the tranformation stack.

#### Parameters
* `matrix` The Matrix4 object to push in.

#### `public inline virtual void `[`pushOverride`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1a731ea8a502134a13c059fa9ef1b9fc87)`(`[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` 

Push a tranform into the tranformation stack, while disrespecting already present matrices/.

#### Parameters
* `matrix` The Matrix4 object to push in.

#### `public inline virtual void `[`pop`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component_1aba9f2cd2a076a88e9efe46d477a7ce4d)`()` 

Pop and return a tranform from the tranformation stack.

# class `Rubeus::GraphicComponents::RShaderComponent` 

```
class Rubeus::GraphicComponents::RShaderComponent
  : public Rubeus::RMasterComponent
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public GLuint `[`m_ShaderID`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abf56a99defcf4ed8a75f24f9bbe04dbe) | Identifier for the shader being added.
`public const char * `[`m_VertPath`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a7b4714ca02f2a4970cdc074fc722c549) | Full pathname of the vertex shader code file.
`public const char * `[`m_FragPath`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1ae0507f3c84bda7136def2cc7a621a4c5) | Full pathname of the fragment shader code file.
`public `[`UtilityComponents::RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component)` * `[`m_Loader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a2e5e1a382b825cfd27c39d23208071d6) | The loader component for shader loading.
`public GLuint `[`loadShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a8881593786a5c59aacf435c8796cc59c)`()` | 
`public GLint `[`getUniformLocation`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a6495ea1365be85495c240f7a397b9c87)`(const GLchar * name)` | 
`public  `[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a38577fabebd9efed69c13525bf708ba7)`(const char * vertPath,const char * fragPath)` | 
`public  `[`~RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abd61766dfb007cf033a8ce1a09dc5c50)`()` | 
`public void `[`setUniform1f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a9fc09aae14ebd987d4a72a5380015c97)`(const GLchar * name,float value)` | 
`public void `[`setUniform1fv`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a891ebf11ef1dc0c23f2813e610c0767c)`(const GLchar * name,float * values,int count)` | Sets the uniform float array required in this shader.
`public void `[`setUniform1i`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a52379b6f616a7b2e1aac0f024848701c)`(const GLchar * name,int value)` | 
`public void `[`setUniform1iv`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a42ccf154f3f3e9b082e9b678a38ec0ac)`(const GLchar * name,int * values,int count)` | Sets the uniform int array required in this shader.
`public void `[`setUniform2f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a1a271588980972e1c6e3c332716a0147)`(const GLchar * name,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector)` | 
`public void `[`setUniform3f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1ac7428f977b299c39f6d736f6e2d628b1)`(const GLchar * name,const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector)` | 
`public void `[`setUniform4f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1aef1fddd2a3b22588c45b4a6c955d4052)`(const GLchar * name,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & vector)` | 
`public void `[`setUniformMat4`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a6a88fa2a4305ba45452b671f01e54e7a)`(const GLchar * name,const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` | 
`public void `[`enableShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a600b1e78b24481b27243963fd4187c4b)`() const` | 
`public void `[`disableShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abce81e5d2bbecc70a32f1f8b07236193)`() const` | 

## Members

#### `public GLuint `[`m_ShaderID`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abf56a99defcf4ed8a75f24f9bbe04dbe) 

Identifier for the shader being added.

#### `public const char * `[`m_VertPath`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a7b4714ca02f2a4970cdc074fc722c549) 

Full pathname of the vertex shader code file.

#### `public const char * `[`m_FragPath`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1ae0507f3c84bda7136def2cc7a621a4c5) 

Full pathname of the fragment shader code file.

#### `public `[`UtilityComponents::RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component)` * `[`m_Loader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a2e5e1a382b825cfd27c39d23208071d6) 

The loader component for shader loading.

#### `public GLuint `[`loadShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a8881593786a5c59aacf435c8796cc59c)`()` 

#### `public GLint `[`getUniformLocation`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a6495ea1365be85495c240f7a397b9c87)`(const GLchar * name)` 

#### `public  `[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a38577fabebd9efed69c13525bf708ba7)`(const char * vertPath,const char * fragPath)` 

#### `public  `[`~RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abd61766dfb007cf033a8ce1a09dc5c50)`()` 

#### `public void `[`setUniform1f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a9fc09aae14ebd987d4a72a5380015c97)`(const GLchar * name,float value)` 

#### `public void `[`setUniform1fv`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a891ebf11ef1dc0c23f2813e610c0767c)`(const GLchar * name,float * values,int count)` 

Sets the uniform float array required in this shader.

Do enable the shader before setting GLSL uniforms

#### Parameters
* `name` Name given to the uniform in this shader. 

* `values` Pointer to the first element of the float array to be passed in. 

* `count` Number of elements in the float array.

#### `public void `[`setUniform1i`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a52379b6f616a7b2e1aac0f024848701c)`(const GLchar * name,int value)` 

#### `public void `[`setUniform1iv`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a42ccf154f3f3e9b082e9b678a38ec0ac)`(const GLchar * name,int * values,int count)` 

Sets the uniform int array required in this shader.

Enable the shader before setting GLSL uniforms. E.g. shader.enableShader()

#### Parameters
* `name` Name given to the uniform in this shader. 

* `values` Pointer to the first element of the int array to be passed in. 

* `count` Number of elements in the int array.

#### `public void `[`setUniform2f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a1a271588980972e1c6e3c332716a0147)`(const GLchar * name,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector)` 

#### `public void `[`setUniform3f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1ac7428f977b299c39f6d736f6e2d628b1)`(const GLchar * name,const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector)` 

#### `public void `[`setUniform4f`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1aef1fddd2a3b22588c45b4a6c955d4052)`(const GLchar * name,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & vector)` 

#### `public void `[`setUniformMat4`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a6a88fa2a4305ba45452b671f01e54e7a)`(const GLchar * name,const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & matrix)` 

#### `public void `[`enableShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1a600b1e78b24481b27243963fd4187c4b)`() const` 

#### `public void `[`disableShader`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component_1abce81e5d2bbecc70a32f1f8b07236193)`() const` 

# class `Rubeus::GraphicComponents::RSimpleRendererComponent` 

```
class Rubeus::GraphicComponents::RSimpleRendererComponent
  : public Rubeus::GraphicComponents::RRendererComponent
```  

A simple renderer. Only for testing purposes.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component_1a7beb3a6fe8fed441328323ac4ef843f0)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` | Submits the given renderable object.
`public virtual void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component_1a12cb23fa1c2aea044b239f85767c372c)`()` | Flushes the render objects' queue after displaying them on the screen.

## Members

#### `public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component_1a7beb3a6fe8fed441328323ac4ef843f0)`(const `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object)` * renderable)` 

Submits the given renderable object.

#### Parameters
* `renderable` The renderable.

#### `public virtual void `[`flush`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component_1a12cb23fa1c2aea044b239f85767c372c)`()` 

Flushes the render objects' queue after displaying them on the screen.

# class `Rubeus::GraphicComponents::RSprite` 

```
class Rubeus::GraphicComponents::RSprite
  : public Rubeus::GraphicComponents::RRenderableObject
```  

A sprite compatible with guerrilla renderer.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1ae57b9bca6412edb0bd106b6ec13d9130)`()` | Constructor.
`public virtual  `[`~RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a129dfb88b174cc3506bd6cccf6871732)`()` | Destructor.
`public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a1d64815d6e93bf072d157f9019d7ac80)`(float x,float y,float width,float height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color)` | Constructor.
`public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a5ec84d096cfcfc6ca96cb39a3555e32f)`(float x,float y,float width,float height,`[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * texture)` | Constructor.

## Members

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1ae57b9bca6412edb0bd106b6ec13d9130)`()` 

Constructor.

#### `public virtual  `[`~RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a129dfb88b174cc3506bd6cccf6871732)`()` 

Destructor.

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a1d64815d6e93bf072d157f9019d7ac80)`(float x,float y,float width,float height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color)` 

Constructor.

#### Parameters
* `x` The x offset. 

* `y` The y offset. 

* `width` The width. 

* `height` The height. 

* `color` The color of this sprite.

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a5ec84d096cfcfc6ca96cb39a3555e32f)`(float x,float y,float width,float height,`[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * texture)` 

Constructor.

#### Parameters
* `x` The x offset. 

* `y` The y offset. 

* `width` The width. 

* `height` The height. 

* `texture` Pointer to the texture to be used.

# class `Rubeus::GraphicComponents::RStaticLayer` 

```
class Rubeus::GraphicComponents::RStaticLayer
  : public Rubeus::GraphicComponents::RLayer
```  

Allows a static layer of groups of objects to be drawn on the screen.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RStaticLayer`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a0915449c7e4c98f31dfbd7eb7d828f8c)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` | Constructor. Initialises the layer's shader.
`public virtual  `[`~RStaticLayer`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a8e6e6c13bcdab6656f06f854a495f08d)`()` | Destructor.
`public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a2c681c13da16059dd77c9f1eb2b991b2)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` | Adds the group object to this layer.
`public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a5dd2610842436bfc8d2fa527ec0aa7e7)`()` | Draws the layer.

## Members

#### `public  `[`RStaticLayer`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a0915449c7e4c98f31dfbd7eb7d828f8c)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` 

Constructor. Initialises the layer's shader.

Do not pass in derenferences pointers

#### Parameters
* `shader` The shader to allot to this layer.

#### `public virtual  `[`~RStaticLayer`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a8e6e6c13bcdab6656f06f854a495f08d)`()` 

Destructor.

#### `public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a2c681c13da16059dd77c9f1eb2b991b2)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` 

Adds the group object to this layer.

#### Parameters
* `group` The group object to add.

#### Returns
Reference to this layer. Allows chaining multiple group additions. E.g. layer.addGoup(g1).addGroup(g2);

#### `public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_static_layer_1a5dd2610842436bfc8d2fa527ec0aa7e7)`()` 

Draws the layer.

Call only once per frame

# class `Rubeus::GraphicComponents::RStaticSprite` 

```
class Rubeus::GraphicComponents::RStaticSprite
  : public Rubeus::GraphicComponents::RRenderableObject
```  

A static sprite.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a21401ae55bb10d7b9a10232e5881d11d)`(float x,float y,float width,float height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color,`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` | Constructor.
`public  `[`~RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a1b7057b7240d5305622b5720fcffbc2b)`()` | Destructor.
`public inline `[`RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array)` * `[`getVAO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af8a709a0f9ba76b17a3344ab10f92725)`() const` | Gets the vao.
`public inline `[`RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer)` * `[`getIBO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a333623bfa0a8b395171eee04a0698290)`() const` | Gets the ibo.
`public inline `[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & `[`getShader`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af134c2b842063a38ae9b8d3b13a74947)`() const` | Gets the shader.

## Members

#### `public  `[`RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a21401ae55bb10d7b9a10232e5881d11d)`(float x,float y,float width,float height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color,`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` 

Constructor.

#### Parameters
* `x` The x offset. 

* `y` The y offset. 

* `width` The width. 

* `height` The height. 

* `color` The color. 

* `shader` The shader.

#### `public  `[`~RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a1b7057b7240d5305622b5720fcffbc2b)`()` 

Destructor.

#### `public inline `[`RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array)` * `[`getVAO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af8a709a0f9ba76b17a3344ab10f92725)`() const` 

Gets the vao.

#### Returns
Null if it fails, else the vao.

#### `public inline `[`RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer)` * `[`getIBO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a333623bfa0a8b395171eee04a0698290)`() const` 

Gets the ibo.

#### Returns
Null if it fails, else the ibo.

#### `public inline `[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & `[`getShader`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af134c2b842063a38ae9b8d3b13a74947)`() const` 

Gets the shader.

#### Returns
The shader.

# class `Rubeus::GraphicComponents::RTexture` 

A texture class containing all OpenGL abstractions for implementing textures.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1a5e0e8a64c123519e8b4d5adeef4a818d)`(const char * path)` | Constructor. Uses a path string to load an image from.
`public  `[`~RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1aac9570f1052e68205e620044dcc00561)`()` | Destructor.
`public void `[`bindTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ad42320182db320ed23ffd8a62488d645)`() const` | Binds this texture object.
`public void `[`unbindTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ac7c99cfd61ca61bc419ade0c9e7f9738)`() const` | Unbinds this texture object.
`public inline const GLuint `[`getID`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ae47da0c2eee8a5d1ee0306950bf4eb29)`() const` | Returns the texture ID of this texture.

## Members

#### `public  `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1a5e0e8a64c123519e8b4d5adeef4a818d)`(const char * path)` 

Constructor. Uses a path string to load an image from.

#### Parameters
* `path` The file path for the image.

#### `public  `[`~RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1aac9570f1052e68205e620044dcc00561)`()` 

Destructor.

#### `public void `[`bindTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ad42320182db320ed23ffd8a62488d645)`() const` 

Binds this texture object.

Decreases graphics performance if used repeatedly.

#### `public void `[`unbindTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ac7c99cfd61ca61bc419ade0c9e7f9738)`() const` 

Unbinds this texture object.

Decreases graphics performance if used repeatedly.

#### `public inline const GLuint `[`getID`](#class_rubeus_1_1_graphic_components_1_1_r_texture_1ae47da0c2eee8a5d1ee0306950bf4eb29)`() const` 

Returns the texture ID of this texture.

#### Returns
Copy of this object's texture ID.

# class `Rubeus::GraphicComponents::RVertexArray` 

A vertex array class that handles vertex and index buffer bindings.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a0038c4ef2b2bb0a9e6bb4f8c51bd3c2b)`()` | Default constructor. Acquires a vertex array object ID from OpenGL.
`public  `[`~RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a8e84e0fce03cffce793776e3d9475f24)`()` | Destructor.
`public void `[`addBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1aa6640e03d3ab6e570d1b923362d3d71c)`(`[`RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer)` * buffer,GLuint index)` | Adds a buffer to the specified shader ID.
`public void `[`bindVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a9db4ee31cf63d0463cdda0b08b734f11)`() const` | Bind this vertex array.
`public void `[`unbindVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1abc9af51ced90d29675e4071ae56b37b1)`() const` | Unbind this vertex array.

## Members

#### `public  `[`RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a0038c4ef2b2bb0a9e6bb4f8c51bd3c2b)`()` 

Default constructor. Acquires a vertex array object ID from OpenGL.

#### `public  `[`~RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a8e84e0fce03cffce793776e3d9475f24)`()` 

Destructor.

#### `public void `[`addBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1aa6640e03d3ab6e570d1b923362d3d71c)`(`[`RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer)` * buffer,GLuint index)` 

Adds a buffer to the specified shader ID.

#### Parameters
* `buffer` If non-null, the buffer. 

* `index` The location specified in shader to add a buffer to.

#### `public void `[`bindVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1a9db4ee31cf63d0463cdda0b08b734f11)`() const` 

Bind this vertex array.

#### `public void `[`unbindVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array_1abc9af51ced90d29675e4071ae56b37b1)`() const` 

Unbind this vertex array.

# class `Rubeus::GraphicComponents::RWindowComponent` 

```
class Rubeus::GraphicComponents::RWindowComponent
  : public Rubeus::RMasterComponent
```  

A window component that bridges GLFW function calls to handle Rubeus game window.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`initWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a7de46dcdb635adfd4324e7ca5da1b3f0)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType)` | Initializes the Rubeus game window. Use enum EWindowParameters for windowMode and windowType.
`public  `[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac61828b6b57dfb3aa398fd0cd5f34224)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType,int setFPS)` | Constructor. Use enum EWindowParameters for windowMode and windowType.
`public  `[`~RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab56619ea64ad8ebec5f0059a7a5c6638)`()` | Destructor.
`public void `[`clearWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab7c5724af3c2d6f3c3db226eb0757263)`()` | Clears the window with a color buffer.
`public void `[`updateWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1af65024825d2b929e9e322570f48aad81)`()` | Updates the window Polls GLFW for any changes Then swaps the buffers.
`public bool `[`closed`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a47a71ace6fce39d9e9213c914b9be2f3)`()` | Queries if the window is closed.
`public void `[`setWindowTitle`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a279b5589ab679da9f44d34a47bcc3966)`(const char * title)` | Sets window title.
`public void `[`setWindowIcon`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac79eb96ca24e529ab82411e58c81ccdc)`(`[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` GameWindow,std::string names)` | 
`public void `[`setWindowIconToDefault`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a002c157c066b4f5040cf140a593850a6)`()` | 
`public virtual void `[`onMessage`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a55b12b3208217709e571d6e7811de756)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles the message received.

## Members

#### `public bool `[`initWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a7de46dcdb635adfd4324e7ca5da1b3f0)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType)` 

Initializes the Rubeus game window. Use enum EWindowParameters for windowMode and windowType.

#### Parameters
* `title` The title of the window to be formed. 

* `width` The width of the window to be formed. 

* `height` The height of the window to be formed. 

* `windowMode` (Optional) The window mode. Default is windowed mode 

* `windowType` (Optional) Type of the window. Default is resizable window

#### Returns
True if it succeeds, false if it fails.

#### `public  `[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac61828b6b57dfb3aa398fd0cd5f34224)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType,int setFPS)` 

Constructor. Use enum EWindowParameters for windowMode and windowType.

#### Parameters
* `title` The title of the window to be formed. 

* `width` The width of the window to be formed in pixels. 

* `height` The height of the window to be formed in pixels. 

* `windowMode` (Optional) The window mode. Default is windowed mode. 

* `windowType` (Optional) Type of the window. Default is resizable window. 

* `setFPS` The FPS. Default is 60fps. Use 0 for unbound FPS, 1 for 60 FPS, 2 for 30 FPS, and likewise

#### `public  `[`~RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab56619ea64ad8ebec5f0059a7a5c6638)`()` 

Destructor.

#### `public void `[`clearWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab7c5724af3c2d6f3c3db226eb0757263)`()` 

Clears the window with a color buffer.

#### `public void `[`updateWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1af65024825d2b929e9e322570f48aad81)`()` 

Updates the window Polls GLFW for any changes Then swaps the buffers.

#### `public bool `[`closed`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a47a71ace6fce39d9e9213c914b9be2f3)`()` 

Queries if the window is closed.

#### Returns
m_Closed.

#### `public void `[`setWindowTitle`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a279b5589ab679da9f44d34a47bcc3966)`(const char * title)` 

Sets window title.

#### Parameters
* `title` The title.

#### `public void `[`setWindowIcon`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac79eb96ca24e529ab82411e58c81ccdc)`(`[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` GameWindow,std::string names)` 

#### `public void `[`setWindowIconToDefault`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a002c157c066b4f5040cf140a593850a6)`()` 

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a55b12b3208217709e571d6e7811de756)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

Handles the message received.

Only to be used by the message system

#### Parameters
* `msg` The message object recieved.

# struct `Rubeus::GraphicComponents::Image` 

A collection of the image data and its features.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ILubyte * `[`m_Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1ae65adf1715e3380c6443a4591f9dc15c) | The image data array.
`public const unsigned int `[`m_Height`](#struct_rubeus_1_1_graphic_components_1_1_image_1a9435205def76db47dabc9074dfdc51fb) | Height of the image in pixels.
`public const unsigned int `[`m_Width`](#struct_rubeus_1_1_graphic_components_1_1_image_1ae6d6756edf799ac88c5ef634379516ac) | Width of the image in pixels.
`public const unsigned int `[`m_BPP`](#struct_rubeus_1_1_graphic_components_1_1_image_1a0cf4de47391d4481a3b5f44f947cd643) | The bits per pixel of the image data. (= # of channels * sizeof(byte))
`public  `[`Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1a243c94e8bb69d002bf608dcac068cbe9)`(ILubyte imageData,unsigned int height,unsigned int width,unsigned int bpp)` | Constructor.
`public  `[`~Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1a1d852d6baa83de3e5dcc2626e1df61d0)`()` | Destructor.

## Members

#### `public ILubyte * `[`m_Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1ae65adf1715e3380c6443a4591f9dc15c) 

The image data array.

#### `public const unsigned int `[`m_Height`](#struct_rubeus_1_1_graphic_components_1_1_image_1a9435205def76db47dabc9074dfdc51fb) 

Height of the image in pixels.

#### `public const unsigned int `[`m_Width`](#struct_rubeus_1_1_graphic_components_1_1_image_1ae6d6756edf799ac88c5ef634379516ac) 

Width of the image in pixels.

#### `public const unsigned int `[`m_BPP`](#struct_rubeus_1_1_graphic_components_1_1_image_1a0cf4de47391d4481a3b5f44f947cd643) 

The bits per pixel of the image data. (= # of channels * sizeof(byte))

#### `public  `[`Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1a243c94e8bb69d002bf608dcac068cbe9)`(ILubyte imageData,unsigned int height,unsigned int width,unsigned int bpp)` 

Constructor.

#### Parameters
* `imageData` Array of byte values storing image data pixel-wise. 

* `height` Height of the image in pixels. 

* `width` Width of the image in pixels. 

* `bpp` bpp of the image in bits per pixel.

#### `public  `[`~Image`](#struct_rubeus_1_1_graphic_components_1_1_image_1a1d852d6baa83de3e5dcc2626e1df61d0)`()` 

Destructor.

# struct `Rubeus::GraphicComponents::VertexData` 

A structure holding vertex data to be sent to OpenGL.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`vertex`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1ace7fc834563dcb365a2158d654e13976) | The vertex position.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`uv`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1a0e10e8b6e42c269d89c9bcff53ac6a5b) | UV coordinates for this vertex.
`public float `[`texID`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1a1b7c9661475f54fa282603c4785d5bd1) | Texture ID alloted to this vertex.
`public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`color`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1ad38d09def4c05a57e605f77fad0dfcfd) | The color of this vertex.

## Members

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`vertex`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1ace7fc834563dcb365a2158d654e13976) 

The vertex position.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`uv`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1a0e10e8b6e42c269d89c9bcff53ac6a5b) 

UV coordinates for this vertex.

#### `public float `[`texID`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1a1b7c9661475f54fa282603c4785d5bd1) 

Texture ID alloted to this vertex.

#### `public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` `[`color`](#struct_rubeus_1_1_graphic_components_1_1_vertex_data_1ad38d09def4c05a57e605f77fad0dfcfd) 

The color of this vertex.

# namespace `Rubeus::UtilityComponents` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`Rubeus::UtilityComponents::RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component) | A loader component. Useful for file I/O.
`class `[`Rubeus::UtilityComponents::RTimer`](#class_rubeus_1_1_utility_components_1_1_r_timer) | A timer component. Allows marking timepoints at runtime. Allows frame counting.

# class `Rubeus::UtilityComponents::RLoaderComponent` 

```
class Rubeus::UtilityComponents::RLoaderComponent
  : public Rubeus::RMasterComponent
```  

A loader component. Useful for file I/O.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1ae4a1a7465d9bb7c0a93a1d17ba59cf1c)`()` | Default constructor.
`public  `[`~RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a4bad0754f16152c483e7038eee74cfa4)`()` | Default destructor.
`public std::string `[`loadTextFileStream`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a6b9ef0187b89c74703d0246c7eb3f320)`(const char * filePath)` | 
`public virtual void `[`onMessage`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a2ca4414ddba0b63415a14b2844d8a5a6)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles the message received.

## Members

#### `public  `[`RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1ae4a1a7465d9bb7c0a93a1d17ba59cf1c)`()` 

Default constructor.

#### `public  `[`~RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a4bad0754f16152c483e7038eee74cfa4)`()` 

Default destructor.

#### `public std::string `[`loadTextFileStream`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a6b9ef0187b89c74703d0246c7eb3f320)`(const char * filePath)` 

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_utility_components_1_1_r_loader_component_1a2ca4414ddba0b63415a14b2844d8a5a6)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

Handles the message received.

Use only with the message system

#### Parameters
* `msg` Pointer to the message sent.

# class `Rubeus::UtilityComponents::RTimer` 

```
class Rubeus::UtilityComponents::RTimer
  : public Rubeus::RMasterComponent
```  

A timer component. Allows marking timepoints at runtime. Allows frame counting.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RTimer`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a1b562c3ad5a8e418354ad6f379451956)`(int numberOfTimePoints)` | Constructor.
`public  `[`~RTimer`](#class_rubeus_1_1_utility_components_1_1_r_timer_1abe8b800121fb6158b0ed8b7d6f7c26e5)`()` | Destructor.
`public long long int `[`getRelativeTime`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a0f9d35fd3e12099171d426408eba197a)`(int sinceThisSlotIndex,int tillThisSlotIndex)` | Gets relative time between two timepoints, referred to by their indices.
`public void `[`addTimePoint`](#class_rubeus_1_1_utility_components_1_1_r_timer_1aadc42fab36dd516fa99103d20055ebb2)`(int index)` | Adds a time point at specified index.
`public void `[`setFrameCounter`](#class_rubeus_1_1_utility_components_1_1_r_timer_1afb63c111c6b03072e25946cf70c812e3)`()` | Sets the frame counter. Use just before game loop.
`public void `[`evaluateFrames`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a454e08ad674269b9824bfb439743b766)`()` | Evaluate frames. Use at the end of game loop.

## Members

#### `public  `[`RTimer`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a1b562c3ad5a8e418354ad6f379451956)`(int numberOfTimePoints)` 

Constructor.

#### Parameters
* `numberOfTimePoints` Number of time points required.

#### `public  `[`~RTimer`](#class_rubeus_1_1_utility_components_1_1_r_timer_1abe8b800121fb6158b0ed8b7d6f7c26e5)`()` 

Destructor.

#### `public long long int `[`getRelativeTime`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a0f9d35fd3e12099171d426408eba197a)`(int sinceThisSlotIndex,int tillThisSlotIndex)` 

Gets relative time between two timepoints, referred to by their indices.

#### Parameters
* `sinceThisSlotIndex` Zero-based index of the timepoint at this slot number, to calculate time duration from. 

* `tillThisSlotIndex` Zero-based index of the timepoint at this slot number, to calculate time duration till.

#### Returns
The relative time.

#### `public void `[`addTimePoint`](#class_rubeus_1_1_utility_components_1_1_r_timer_1aadc42fab36dd516fa99103d20055ebb2)`(int index)` 

Adds a time point at specified index.

#### Parameters
* `index` Zero-based index of the timepoint.

#### `public void `[`setFrameCounter`](#class_rubeus_1_1_utility_components_1_1_r_timer_1afb63c111c6b03072e25946cf70c812e3)`()` 

Sets the frame counter. Use just before game loop.

#### `public void `[`evaluateFrames`](#class_rubeus_1_1_utility_components_1_1_r_timer_1a454e08ad674269b9824bfb439743b766)`()` 

Evaluate frames. Use at the end of game loop.

# class `ETrackName` 

List of track names and track numbers.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `ETrackType` 

List of track types available.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `Group` 

A group of objects in a family based hierarchy.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `MasterComponent` 

A master component. Serves as parent class for all components.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `RShader` 

A shader class. Allows shader code to be sent to OpenGL.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

Generated by [Moxygen](https://sourcey.com/moxygen)
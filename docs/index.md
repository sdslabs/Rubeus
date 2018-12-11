# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`MAX_VOLUME`](#audio__manager__component_8h_1a7ed6a6db7ec466a04b820f3de267708a)            | 
`define `[`VOLUME_STEP`](#audio__manager__component_8h_1a0ee22d7ec8557106b82e9ee74ee813f9)            | 
`define `[`LOGS`](#logger__component_8h_1a11b913242029687af09171c20ae788eb)            | 
`define `[`USERLOG`](#logger__component_8h_1a12875c56d7bb86d5097432b961bd28b7)            | 
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
`namespace `[`Rubeus::Awerere`](#namespace_rubeus_1_1_awerere) | 
`namespace `[`Rubeus::GraphicComponents`](#namespace_rubeus_1_1_graphic_components) | 
`namespace `[`Rubeus::UtilityComponents`](#namespace_rubeus_1_1_utility_components) | 
`class `[`APLaneCollider`](#class_a_p_lane_collider) | A 2D plane collider, equivalent to a straight line on a 2D screen.
`class `[`ETrackName`](#class_e_track_name) | List of track names and track numbers.
`class `[`ETrackType`](#class_e_track_type) | List of track types available.
`class `[`Group`](#class_group) | A group of objects in a family based hierarchy.
`class `[`MasterComponent`](#class_master_component) | A master component. Serves as parent class for all components.
`class `[`RShader`](#class_r_shader) | A shader class. Allows shader code to be sent to OpenGL.
`union `[`Unnamed`](#union_unnamed) | An unnamed union. Used to refer to Matrix4 columns as an array of Vector4Ds.

## Members

#### `define `[`MAX_VOLUME`](#audio__manager__component_8h_1a7ed6a6db7ec466a04b820f3de267708a) 

#### `define `[`VOLUME_STEP`](#audio__manager__component_8h_1a0ee22d7ec8557106b82e9ee74ee813f9) 

#### `define `[`LOGS`](#logger__component_8h_1a11b913242029687af09171c20ae788eb) 

#### `define `[`USERLOG`](#logger__component_8h_1a12875c56d7bb86d5097432b961bd28b7) 

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
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`roundTo`](#struct_r_m_l_1_1_vector2_d_1a1ca89d3ad291914b972438af6a9daa27)`(const float & pivotX,const float & errorX,const float & pivotY,const float & errorY)` | Rounds the coordinates to the pivot values for X and Y within the ranges of the error values.
`public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1a235406fb3743bab4fe5d4ce7ac2695e2)`(`[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector) const` | Gets length of vector.
`public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1aea3f43114e90e9a04417e913ba8fba34)`() const` | Gets length of this vector.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`toUnitVector`](#struct_r_m_l_1_1_vector2_d_1a4ee16de3591784873a637de7d4a9a117)`()` | Convert this to a unit vector.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`add`](#struct_r_m_l_1_1_vector2_d_1a24a5d8d195ddd7e0e5f27c05a93bf823)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Adds other.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`subtract`](#struct_r_m_l_1_1_vector2_d_1a5a4ea7ff7f1036a4fa7d94a67b72c620)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Subtracts the given other.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`multiply`](#struct_r_m_l_1_1_vector2_d_1a0c18b119beab3d9ee30fb5b86e76d75b)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Multiplies the given other.
`public float `[`multiplyDot`](#struct_r_m_l_1_1_vector2_d_1a546a699a61147c25f1bf25dfc8b1801b)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Multiplies the given other vector (Dot product)
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`multiplyFloat`](#struct_r_m_l_1_1_vector2_d_1a5924353951367561c4a0c234fda6ca7e)`(const float & other)` | Scale all values of this vector by a float.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`divide`](#struct_r_m_l_1_1_vector2_d_1af6867f3291fa38bb929187ec966390f2)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Divides each element of this vector one by one by the corresponding vector of the other vector. Returns [a/x , b/y] if [a , b] is divided by [x , y].
`public bool `[`operator==`](#struct_r_m_l_1_1_vector2_d_1a4d39c5e0743400d7d14d0683ff168a5a)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Equality operator.
`public bool `[`operator!=`](#struct_r_m_l_1_1_vector2_d_1ad0fd2b1ac014d6345224d03f258a1164)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Inequality operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`operator+=`](#struct_r_m_l_1_1_vector2_d_1a933787f37217402094ecec3f3e3de01c)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Addition assignment operator.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`operator-=`](#struct_r_m_l_1_1_vector2_d_1ae84dd5464e4d694434eaa3686203a85f)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` | Subtraction assignment operator.
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

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`roundTo`](#struct_r_m_l_1_1_vector2_d_1a1ca89d3ad291914b972438af6a9daa27)`(const float & pivotX,const float & errorX,const float & pivotY,const float & errorY)` 

Rounds the coordinates to the pivot values for X and Y within the ranges of the error values.

#### Parameters
* `pivotX` The X pivot. 

* `pivotY` The Y pivot. 

* `errorX` The X error for pivot. 

* `errorY` The Y error for pivot.

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1a235406fb3743bab4fe5d4ce7ac2695e2)`(`[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & vector) const` 

Gets length of vector.

#### Parameters
* `vector` The vector.

#### Returns
The length.

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector2_d_1aea3f43114e90e9a04417e913ba8fba34)`() const` 

Gets length of this vector.

#### Returns
The length.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`toUnitVector`](#struct_r_m_l_1_1_vector2_d_1a4ee16de3591784873a637de7d4a9a117)`()` 

Convert this to a unit vector.

#### Returns
The normalised vector.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`add`](#struct_r_m_l_1_1_vector2_d_1a24a5d8d195ddd7e0e5f27c05a93bf823)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Adds other.

#### Parameters
* `other` The other to add.

#### Returns
A reference to a [Vector2D](#struct_r_m_l_1_1_vector2_d).

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`subtract`](#struct_r_m_l_1_1_vector2_d_1a5a4ea7ff7f1036a4fa7d94a67b72c620)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

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

#### `public float `[`multiplyDot`](#struct_r_m_l_1_1_vector2_d_1a546a699a61147c25f1bf25dfc8b1801b)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

Multiplies the given other vector (Dot product)

#### Parameters
* `other` The other.

#### Returns
A dot product result.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`multiplyFloat`](#struct_r_m_l_1_1_vector2_d_1a5924353951367561c4a0c234fda6ca7e)`(const float & other)` 

Scale all values of this vector by a float.

#### Parameters
* `other` The other.

#### Returns
Scaled version of this vector.

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

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`operator-=`](#struct_r_m_l_1_1_vector2_d_1ae84dd5464e4d694434eaa3686203a85f)`(const `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` & other)` 

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
`public float `[`getLength`](#struct_r_m_l_1_1_vector3_d_1a6bd22eee58b37b3b4b91754571b1e48b)`() const` | Gets length of this vector.
`public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`getVector2D`](#struct_r_m_l_1_1_vector3_d_1a5da7b6fe2e19a24e82772cf22e4c2867)`()` | Return a [Vector2D](#struct_r_m_l_1_1_vector2_d) containing the x and y values from this [Vector3D](#struct_r_m_l_1_1_vector3_d) respectively.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`add`](#struct_r_m_l_1_1_vector3_d_1ae490026de2bc1c7c69543686d5677d33)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Adds other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`subtract`](#struct_r_m_l_1_1_vector3_d_1a5831741dc88ac4abba376953c37c760b)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Subtracts the given other.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiply`](#struct_r_m_l_1_1_vector3_d_1a8b30fe6010364d9f7c0a9f70d79cd763)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Multiplies the given other.
`public float `[`multiplyDot`](#struct_r_m_l_1_1_vector3_d_1a3b6d80bab45142aec132a0346700c359)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Multiplies the given other (Dot product).
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiplyCross`](#struct_r_m_l_1_1_vector3_d_1adc2b1e17647096ae521dcf6d311865f4)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Multiplies the given other (Cross product).
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiplyFloat`](#struct_r_m_l_1_1_vector3_d_1ae2d337be1d28c3dd69b8bbf0e28edd96)`(const float & other)` | Multiplies the given float with this (Scaling).
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`divide`](#struct_r_m_l_1_1_vector3_d_1a15ac875f67d72fba4edc3e92432fd5a5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Divides the given other. Returns [a/x , b/y , c/z] if [a , b , c] is divided by [x , y , z].
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`maxVector`](#struct_r_m_l_1_1_vector3_d_1a76389860cf59e006774350b7dc6c8ac0)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Returns a [Vector3D](#struct_r_m_l_1_1_vector3_d) with only the maximum coordinates on each axes as compared to the given other.
`public float `[`maxComponent`](#struct_r_m_l_1_1_vector3_d_1a1b587cc95c5c86fcc9889708e6a8bdbb)`()` | Return the maximum coordinate across all axes.
`public float `[`maxXYComponent`](#struct_r_m_l_1_1_vector3_d_1a3a3cbf18514354e026e7fe6805a24c64)`()` | 
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`toUnitVector`](#struct_r_m_l_1_1_vector3_d_1a8c96bef6d9e1bf4fcafcdb98e4f0255a)`()` | Convert this vector to a unit vector.
`public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`abs`](#struct_r_m_l_1_1_vector3_d_1ad35a19cce41b5875084eb04096af7339)`()` | Take modulus of all coordinates.
`public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a048a3d9ed505aee2e637117036d23d43)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` | Equality operator.
`public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a637658f7699a29b1025e4a242f331467)`(const int other)` | 
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

#### `public float `[`getLength`](#struct_r_m_l_1_1_vector3_d_1a6bd22eee58b37b3b4b91754571b1e48b)`() const` 

Gets length of this vector.

#### Returns
The length.

#### `public `[`Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`getVector2D`](#struct_r_m_l_1_1_vector3_d_1a5da7b6fe2e19a24e82772cf22e4c2867)`()` 

Return a [Vector2D](#struct_r_m_l_1_1_vector2_d) containing the x and y values from this [Vector3D](#struct_r_m_l_1_1_vector3_d) respectively.

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

#### `public float `[`multiplyDot`](#struct_r_m_l_1_1_vector3_d_1a3b6d80bab45142aec132a0346700c359)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Multiplies the given other (Dot product).

#### Parameters
* `other` The other.

#### Returns
A result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiplyCross`](#struct_r_m_l_1_1_vector3_d_1adc2b1e17647096ae521dcf6d311865f4)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Multiplies the given other (Cross product).

#### Parameters
* `other` The other.

#### Returns
A result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`multiplyFloat`](#struct_r_m_l_1_1_vector3_d_1ae2d337be1d28c3dd69b8bbf0e28edd96)`(const float & other)` 

Multiplies the given float with this (Scaling).

#### Parameters
* `other` The other.

#### Returns
A result of the operation.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`divide`](#struct_r_m_l_1_1_vector3_d_1a15ac875f67d72fba4edc3e92432fd5a5)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Divides the given other. Returns [a/x , b/y , c/z] if [a , b , c] is divided by [x , y , z].

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`maxVector`](#struct_r_m_l_1_1_vector3_d_1a76389860cf59e006774350b7dc6c8ac0)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Returns a [Vector3D](#struct_r_m_l_1_1_vector3_d) with only the maximum coordinates on each axes as compared to the given other.

#### Parameters
* `other` The other.

#### Returns
A reference to a [Vector3D](#struct_r_m_l_1_1_vector3_d).

#### `public float `[`maxComponent`](#struct_r_m_l_1_1_vector3_d_1a1b587cc95c5c86fcc9889708e6a8bdbb)`()` 

Return the maximum coordinate across all axes.

Return the maximum coordinate across X and Y axes.

#### Returns
The maximum coordinate.

#### `public float `[`maxXYComponent`](#struct_r_m_l_1_1_vector3_d_1a3a3cbf18514354e026e7fe6805a24c64)`()` 

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`toUnitVector`](#struct_r_m_l_1_1_vector3_d_1a8c96bef6d9e1bf4fcafcdb98e4f0255a)`()` 

Convert this vector to a unit vector.

#### Returns
The unit vector.

#### `public `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`abs`](#struct_r_m_l_1_1_vector3_d_1ad35a19cce41b5875084eb04096af7339)`()` 

Take modulus of all coordinates.

#### Returns
The abs vector.

#### `public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a048a3d9ed505aee2e637117036d23d43)`(const `[`Vector3D`](#struct_r_m_l_1_1_vector3_d)` & other)` 

Equality operator.

Int equality operator.

#### Parameters
* `other` The other.

#### Returns
True if the parameters are considered equivalent.

#### Parameters
* `other` The other.

#### Returns
True if the all parameters are equal to other.

#### `public bool `[`operator==`](#struct_r_m_l_1_1_vector3_d_1a637658f7699a29b1025e4a242f331467)`(const int other)` 

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
`public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`toUnitVector`](#struct_r_m_l_1_1_vector4_d_1a386d73ef35785fbb06516df7f302fa32)`()` | Returns this vector as a modified unit vector.
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

#### `public `[`Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`toUnitVector`](#struct_r_m_l_1_1_vector4_d_1a386d73ef35785fbb06516df7f302fa32)`()` 

Returns this vector as a modified unit vector.

Works on this object directly

#### Returns
Unit vector pointing in the direction of this vector.

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
`enum `[`EMouseButtons`](#keys_8h_1ac04ea80a8fa238524f8582b0a66efdce)            | Mouse buttons supported.
`enum `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)            | Keyboard keys supported.
`enum `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136)            | Defines all message codes the game requires.
`enum `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a)            | Defines audio commands allowed to send to the audio manager.
`public void `[`mouseButtonCallback`](#input__manager_8h_1aacfcb5d781b426a6e1b57f5e68274e33)`(GLFWwindow * window,int button,int action,int mods)`            | Callback function which sets the flag corresponding to a mouse button.
`public void `[`scrollCallback`](#input__manager_8h_1a769307f85758c7d5e45ff3bed4f37bd4)`(GLFWwindow * window,double xoffset,double yoffset)`            | Callback function which sets mouse scroll value.
`public void `[`keyCallback`](#input__manager_8h_1a5dd263446a456f7c3894d2b491522ee8)`(GLFWwindow * window,int key,int scancode,int action,int mods)`            | Callback function which sets the flag corresponding to a key.
`public void `[`cursorPositionCallback`](#input__manager_8h_1a5a2e4612469f7116f7713e8431673013)`(GLFWwindow * window,double xpos,double ypos)`            | Callback function which sets mouse position value.
`class `[`Rubeus::REngine`](#class_rubeus_1_1_r_engine) | A class the contains all components that make up Rubeus.
`class `[`Rubeus::REntity`](#class_rubeus_1_1_r_entity) | 
`class `[`Rubeus::RGameObject`](#class_rubeus_1_1_r_game_object) | A game object. Main class responsible for player interactions.
`class `[`Rubeus::RInputManager`](#class_rubeus_1_1_r_input_manager) | The Input manager. Manages key strokes, mouse buttons, and cursor/scroll inputs.
`class `[`Rubeus::RLevel`](#class_rubeus_1_1_r_level) | A single container from all access to a level's contents.
`class `[`Rubeus::RMasterComponent`](#class_rubeus_1_1_r_master_component) | 
`class `[`Rubeus::RMessageBus`](#class_rubeus_1_1_r_message_bus) | 
`class `[`Rubeus::RMessageSystem`](#class_rubeus_1_1_r_message_system) | A message system class that handles message posting and adding.
`class `[`Rubeus::RWorld`](#class_rubeus_1_1_r_world) | The container for all gameobjects. Synonymous to Scene graph.
`struct `[`Rubeus::AudioModifier`](#struct_rubeus_1_1_audio_modifier) | Custom POD structure to be sent with messages as audio commands.
`struct `[`Rubeus::Message`](#struct_rubeus_1_1_message) | Declares the message objects that systems use to communicate.

## Members

#### `enum `[`EMouseButtons`](#keys_8h_1ac04ea80a8fa238524f8582b0a66efdce) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
__MOUSE_BUTTON_1            | 
__MOUSE_BUTTON_2            | 
__MOUSE_BUTTON_3            | 
__MOUSE_BUTTON_4            | 
__MOUSE_BUTTON_5            | 
__MOUSE_BUTTON_6            | 
__MOUSE_BUTTON_7            | 
__MOUSE_BUTTON_8            | 
__MOUSE_BUTTON_LAST            | 
__MOUSE_BUTTON_LEFT            | 
__MOUSE_BUTTON_RIGHT            | 
__MOUSE_BUTTON_MIDDLE            | 

Mouse buttons supported.

#### `enum `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
__UNKNOWN            | 
__SPACE            | 
__APOSTROPHE            | 
__COMMA            | 
__MINUS            | 
__PERIOD            | 
__SLASH            | 
__0            | 
__1            | 
__2            | 
__3            | 
__4            | 
__5            | 
__6            | 
__7            | 
__8            | 
__9            | 
__SEMICOLON            | 
__EQUAL            | 
__A            | 
__B            | 
__C            | 
__D            | 
__E            | 
__F            | 
__G            | 
__H            | 
__I            | 
__J            | 
__K            | 
__L            | 
__M            | 
__N            | 
__O            | 
__P            | 
__Q            | 
__R            | 
__S            | 
__T            | 
__U            | 
__V            | 
__W            | 
__X            | 
__Y            | 
__Z            | 
__LEFT_BRACKET            | 
__BACKSLASH            | 
__RIGHT_BRACKET            | 
__GRAVE_ACCENT            | 
__WORLD_1            | 
__WORLD_2            | 
__ESCAPE            | 
__ENTER            | 
__TAB            | 
__BACKSPACE            | 
__INSERT            | 
__DELETE            | 
__RIGHT            | 
__LEFT            | 
__DOWN            | 
__UP            | 
__PAGE_UP            | 
__PAGE_DOWN            | 
__HOME            | 
__END            | 
__CAPS_LOCK            | 
__SCROLL_LOCK            | 
__NUM_LOCK            | 
__PRINT_SCREEN            | 
__PAUSE            | 
__F1            | 
__F2            | 
__F3            | 
__F4            | 
__F5            | 
__F6            | 
__F7            | 
__F8            | 
__F9            | 
__F10            | 
__F11            | 
__F12            | 
__F13            | 
__F14            | 
__F15            | 
__F16            | 
__F17            | 
__F18            | 
__F19            | 
__F20            | 
__F21            | 
__F22            | 
__F23            | 
__F24            | 
__F25            | 
__KP_0            | 
__KP_1            | 
__KP_2            | 
__KP_3            | 
__KP_4            | 
__KP_5            | 
__KP_6            | 
__KP_7            | 
__KP_8            | 
__KP_9            | 
__KP_DECIMAL            | 
__KP_DIVIDE            | 
__KP_MULTIPLY            | 
__KP_SUBTRACT            | 
__KP_ADD            | 
__KP_ENTER            | 
__KP_EQUAL            | 
__LEFT_SHIFT            | 
__LEFT_CONTROL            | 
__LEFT_ALT            | 
__LEFT_SUPER            | 
__RIGHT_SHIFT            | 
__RIGHT_CONTROL            | 
__RIGHT_ALT            | 
__RIGHT_SUPER            | 
__MENU            | 
__DEACTIVATED            | 
__ACTIVATED            | 

Keyboard keys supported.

#### `enum `[`EMessageCode`](#message__codes_8h_1a82d14ec7bd46347068de3bc5c03a8136) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
system_ok            | 
change_window_title            | 
load_image            | 
get_loaded_image            | 
modify_audio            | 
load_level            | 

Defines all message codes the game requires.

#### `enum `[`EAudioEffect`](#message__object_8h_1ae1270b4aff91ea4ec19282d79b4da20a) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
fade_out            | 
fade_in            | 

Defines audio commands allowed to send to the audio manager.

#### `public void `[`mouseButtonCallback`](#input__manager_8h_1aacfcb5d781b426a6e1b57f5e68274e33)`(GLFWwindow * window,int button,int action,int mods)` 

Callback function which sets the flag corresponding to a mouse button.

Called only by GLFW when state of a key changes.

#### Parameters
* `window` GLFW specified window object. 

* `button` GLFW specified mouse button pressed or released. 

* `action` GLFW specified key action.(Release, Press or Repeat) 

* `mods` Modifier key pressed along with.

#### `public void `[`scrollCallback`](#input__manager_8h_1a769307f85758c7d5e45ff3bed4f37bd4)`(GLFWwindow * window,double xoffset,double yoffset)` 

Callback function which sets mouse scroll value.

Called only by GLFW when state of a key changes.

#### Parameters
* `window` GLFW specified window object. 

* `xoffset` X value of scroll 

* `yoffset` Y value of scroll

#### `public void `[`keyCallback`](#input__manager_8h_1a5dd263446a456f7c3894d2b491522ee8)`(GLFWwindow * window,int key,int scancode,int action,int mods)` 

Callback function which sets the flag corresponding to a key.

Called only by GLFW when state of a key changes.

#### Parameters
* `window` GLFW specified window object. 

* `key` GLFW specified key which was pressed or released. 

* `action` GLFW specified key action.(Release, Press or Repeat) 

* `mods` Modifier key pressed along with.

#### `public void `[`cursorPositionCallback`](#input__manager_8h_1a5a2e4612469f7116f7713e8431673013)`(GLFWwindow * window,double xpos,double ypos)` 

Callback function which sets mouse position value.

Called only by GLFW when state of a key changes.

#### Parameters
* `window` GLFW specified window object. 

* `xpos` X value of position 

* `ypos` Y value of position

# class `Rubeus::REngine` 

```
class Rubeus::REngine
  : public Rubeus::RMasterComponent
```  

A class the contains all components that make up Rubeus.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::string `[`m_StartupLevelName`](#class_rubeus_1_1_r_engine_1a37d3668492df805a64d806169e04cc86) | The startup level of the entire game. Rubeus ends if this is found to be "" at the end of the frame.
`public  `[`REngine`](#class_rubeus_1_1_r_engine_1aa3a19f74767ace1164f7148303874ad1)`()` | The engine constructor.
`public  `[`~REngine`](#class_rubeus_1_1_r_engine_1ae612f395826983550d3dd7f83ad8c931)`()` | The engine destructor.
`public void `[`load`](#class_rubeus_1_1_r_engine_1a0fac1c188393ed4504edec0576e7f33b)`(`[`RLevel`](#class_rubeus_1_1_r_level)` & level)` | Load a level into memory and run it.
`public void `[`run`](#class_rubeus_1_1_r_engine_1ac7fc60525b690b592fb87b64102788fb)`()` | Run the main game loop.
`public void `[`killAliveLevel`](#class_rubeus_1_1_r_engine_1ad0c92a36a8be9e070a4b4dbcac82e14d)`()` | Kill all current level associated objects.
`public void `[`end`](#class_rubeus_1_1_r_engine_1a06ef27f79fde13dfb6932cb723007912)`()` | End the current Rubeus game session.
`public inline `[`UtilityComponents::RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component)` * `[`getResourceLoader`](#class_rubeus_1_1_r_engine_1ab82dd59fb74f5fc9a29032165cb94519)`() const` | Get the resource loader.
`public inline `[`RLevel`](#class_rubeus_1_1_r_level)` * `[`getCurrentLevel`](#class_rubeus_1_1_r_engine_1af233294e50e57419763d0af502b5bd45)`() const` | Get the current level.
`public inline `[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` * `[`getCurrentWindow`](#class_rubeus_1_1_r_engine_1a6c008a9a9a4b422740f8e948b90aca8d)`() const` | Get the window of current level.
`public inline `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`getCurrentLevelAudioManager`](#class_rubeus_1_1_r_engine_1a2904459651c39133c79900971a624e6a)`() const` | Get the audio manager of the current level.
`public inline `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`getCurrentLevelInputManager`](#class_rubeus_1_1_r_engine_1ac06499662aa41473c66966346afef7ee)`() const` | Get the input manager of the current level.
`public inline `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`getWorld`](#class_rubeus_1_1_r_engine_1a917653e80eaaeb9b7f38d55a0e62ee65)`() const` | Get the world of the current level.
`public virtual void `[`onMessage`](#class_rubeus_1_1_r_engine_1a6e8d3d3fa2558e64a2ed2f3aea06f59b)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | [Message](#struct_rubeus_1_1_message) handler of the engine.

## Members

#### `public std::string `[`m_StartupLevelName`](#class_rubeus_1_1_r_engine_1a37d3668492df805a64d806169e04cc86) 

The startup level of the entire game. Rubeus ends if this is found to be "" at the end of the frame.

#### `public  `[`REngine`](#class_rubeus_1_1_r_engine_1aa3a19f74767ace1164f7148303874ad1)`()` 

The engine constructor.

Do not make multiple copies of the engine

#### `public  `[`~REngine`](#class_rubeus_1_1_r_engine_1ae612f395826983550d3dd7f83ad8c931)`()` 

The engine destructor.

Do not make multiple copies of the engine

#### `public void `[`load`](#class_rubeus_1_1_r_engine_1a0fac1c188393ed4504edec0576e7f33b)`(`[`RLevel`](#class_rubeus_1_1_r_level)` & level)` 

Load a level into memory and run it.

#### Parameters
* `level` The level object to be loaded in.

#### `public void `[`run`](#class_rubeus_1_1_r_engine_1ac7fc60525b690b592fb87b64102788fb)`()` 

Run the main game loop.

#### `public void `[`killAliveLevel`](#class_rubeus_1_1_r_engine_1ad0c92a36a8be9e070a4b4dbcac82e14d)`()` 

Kill all current level associated objects.

#### `public void `[`end`](#class_rubeus_1_1_r_engine_1a06ef27f79fde13dfb6932cb723007912)`()` 

End the current Rubeus game session.

#### `public inline `[`UtilityComponents::RLoaderComponent`](#class_rubeus_1_1_utility_components_1_1_r_loader_component)` * `[`getResourceLoader`](#class_rubeus_1_1_r_engine_1ab82dd59fb74f5fc9a29032165cb94519)`() const` 

Get the resource loader.

Allows loading files, images etc.

#### Returns
Pointer to the resource loader.

#### `public inline `[`RLevel`](#class_rubeus_1_1_r_level)` * `[`getCurrentLevel`](#class_rubeus_1_1_r_engine_1af233294e50e57419763d0af502b5bd45)`() const` 

Get the current level.

#### Returns
Pointer to the current level.

#### `public inline `[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` * `[`getCurrentWindow`](#class_rubeus_1_1_r_engine_1a6c008a9a9a4b422740f8e948b90aca8d)`() const` 

Get the window of current level.

#### Returns
Pointer to the window object.

#### `public inline `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`getCurrentLevelAudioManager`](#class_rubeus_1_1_r_engine_1a2904459651c39133c79900971a624e6a)`() const` 

Get the audio manager of the current level.

#### Returns
Pointer to the current level audio manager.

#### `public inline `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`getCurrentLevelInputManager`](#class_rubeus_1_1_r_engine_1ac06499662aa41473c66966346afef7ee)`() const` 

Get the input manager of the current level.

All keybindings are level specific

#### Returns
Pointer to the input manager object.

#### `public inline `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`getWorld`](#class_rubeus_1_1_r_engine_1a917653e80eaaeb9b7f38d55a0e62ee65)`() const` 

Get the world of the current level.

All levels have a separate world in which they live

#### Returns
Pointer to the world object.

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_r_engine_1a6e8d3d3fa2558e64a2ed2f3aea06f59b)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

[Message](#struct_rubeus_1_1_message) handler of the engine.

Handles engine's asynchronous calls

#### Parameters
* `msg` The message object sent across.

# class `Rubeus::REntity` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int `[`m_EntityID`](#class_rubeus_1_1_r_entity_1a4a6b38c0f88052f8867d8591cbd776d5) | Unique Entity object ID.
`public virtual void `[`tick`](#class_rubeus_1_1_r_entity_1a5a14e115db6573c5b231c52a23582e2d)`()` | Tick function.
`public  `[`REntity`](#class_rubeus_1_1_r_entity_1a5e9533e6bf1e3c9e5a3af285065d4441)`()` | Constructor.
`public virtual  `[`~REntity`](#class_rubeus_1_1_r_entity_1a3ff69a73c97dbe20c3677166205449fa)`()` | 
`public inline std::string `[`getName`](#class_rubeus_1_1_r_entity_1a711b39f7080c54161c642770ae7c73eb)`()` | #### Returns

## Members

#### `public int `[`m_EntityID`](#class_rubeus_1_1_r_entity_1a4a6b38c0f88052f8867d8591cbd776d5) 

Unique Entity object ID.

#### `public virtual void `[`tick`](#class_rubeus_1_1_r_entity_1a5a14e115db6573c5b231c52a23582e2d)`()` 

Tick function.

Invoked every frame

#### `public  `[`REntity`](#class_rubeus_1_1_r_entity_1a5e9533e6bf1e3c9e5a3af285065d4441)`()` 

Constructor.

Destructor.

#### `public virtual  `[`~REntity`](#class_rubeus_1_1_r_entity_1a3ff69a73c97dbe20c3677166205449fa)`()` 

#### `public inline std::string `[`getName`](#class_rubeus_1_1_r_entity_1a711b39f7080c54161c642770ae7c73eb)`()` 

#### Returns
String containing name of this entity.

# class `Rubeus::RGameObject` 

```
class Rubeus::RGameObject
  : public Rubeus::REntity
  : public Rubeus::RMasterComponent
```  

A game object. Main class responsible for player interactions.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::string `[`m_Name`](#class_rubeus_1_1_r_game_object_1ad679990c2ce2ab7d7ee9edebcc679dff) | Name of this game object.
`public std::string `[`m_UsedByLevelName`](#class_rubeus_1_1_r_game_object_1a024d28b449055a4ecee919be155cef61) | The level context during which this object lives.
`public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_r_game_object_1a141774d17214b4a86e8f4d2ada078574) | Sprite used for the rendering process.
`public `[`Awerere::APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object)` * `[`m_PhysicsObject`](#class_rubeus_1_1_r_game_object_1a381c5fbf3aabddacb98c9d70100143ea) | Physics object that handles collisions/response.
`public bool `[`m_ThisTicks`](#class_rubeus_1_1_r_game_object_1a30c59cd4fa242595ab2980f31dfd0f31) | Whether this gameobject ticks.
`public bool `[`m_UsesTexture`](#class_rubeus_1_1_r_game_object_1a9dc72644b5d8b96240763913e767b885) | Whether this gameobject uses a texture.
`public bool `[`m_IsGroup`](#class_rubeus_1_1_r_game_object_1a37dfcb0ff063ffa0e204b5970fa9d2fa) | Whether this gameobject is a group of other child gameobjects.
`public bool `[`m_HasPhysics`](#class_rubeus_1_1_r_game_object_1aa903a9044d22b660f502953e66f084b6) | Whether this gameobject obeys physics and responds to collisions.
`public bool `[`m_GeneratesHit`](#class_rubeus_1_1_r_game_object_1aa8d364e2a65f0bef7b5a90037c46d5ec) | Whether this gameobject generates hit events.
`public  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1af7651813b93b5f305335f29f56fc23f0)`(std::string name,std::string levelName,float x,float y,float deltaX,float deltaY,const char * imageFilePath,bool enablePhysics,const `[`Awerere::EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`Awerere::ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,bool generatesHit,const `[`Awerere::APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` | Constructor. Uses images as textures.
`public  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1aed2b6c42a232def6ce7ee4d1d8e6d124)`(std::string name,std::string levelName,float x,float y,float deltaX,float deltaY,float & r,float & g,float & b,bool enablePhysics,const `[`Awerere::APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & material,const `[`Awerere::EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`Awerere::ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,bool generatesHit)` | 
`public  `[`~RGameObject`](#class_rubeus_1_1_r_game_object_1a4c60d9f9133a6f321c50d39b2f2a096e)`()` | Destructor.
`public virtual void `[`begin`](#class_rubeus_1_1_r_game_object_1a92f2fe2f062e45a168f45db52a7f35c7)`()` | Called by the engine once before the level starts to run.
`public virtual void `[`tick`](#class_rubeus_1_1_r_game_object_1ade6d964c655301870cb762c1b9c02966)`()` | Tick function.
`public virtual void `[`onHit`](#class_rubeus_1_1_r_game_object_1aa137a57fa68332f4966574f123c9944e)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * hammer,`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * nail,const `[`Awerere::ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & collisionData)` | User defined function called whenever a hit event is generated.
`public inline void `[`addToTickQueue`](#class_rubeus_1_1_r_game_object_1a06e56244cc44db0ab56a2ca38423a546)`()` | Set this object for tick by update function.
`public virtual void `[`onMessage`](#class_rubeus_1_1_r_game_object_1aa066422f65deb25b9d75dac94f46ca50)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles message sent by [Message](#struct_rubeus_1_1_message) system.
`protected  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1a3a512ae142f34273d5cfac0177c58a11)`()` | Protected constructor. Only used to create groups.

## Members

#### `public std::string `[`m_Name`](#class_rubeus_1_1_r_game_object_1ad679990c2ce2ab7d7ee9edebcc679dff) 

Name of this game object.

#### `public std::string `[`m_UsedByLevelName`](#class_rubeus_1_1_r_game_object_1a024d28b449055a4ecee919be155cef61) 

The level context during which this object lives.

#### `public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_r_game_object_1a141774d17214b4a86e8f4d2ada078574) 

Sprite used for the rendering process.

#### `public `[`Awerere::APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object)` * `[`m_PhysicsObject`](#class_rubeus_1_1_r_game_object_1a381c5fbf3aabddacb98c9d70100143ea) 

Physics object that handles collisions/response.

#### `public bool `[`m_ThisTicks`](#class_rubeus_1_1_r_game_object_1a30c59cd4fa242595ab2980f31dfd0f31) 

Whether this gameobject ticks.

#### `public bool `[`m_UsesTexture`](#class_rubeus_1_1_r_game_object_1a9dc72644b5d8b96240763913e767b885) 

Whether this gameobject uses a texture.

#### `public bool `[`m_IsGroup`](#class_rubeus_1_1_r_game_object_1a37dfcb0ff063ffa0e204b5970fa9d2fa) 

Whether this gameobject is a group of other child gameobjects.

#### `public bool `[`m_HasPhysics`](#class_rubeus_1_1_r_game_object_1aa903a9044d22b660f502953e66f084b6) 

Whether this gameobject obeys physics and responds to collisions.

#### `public bool `[`m_GeneratesHit`](#class_rubeus_1_1_r_game_object_1aa8d364e2a65f0bef7b5a90037c46d5ec) 

Whether this gameobject generates hit events.

#### `public  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1af7651813b93b5f305335f29f56fc23f0)`(std::string name,std::string levelName,float x,float y,float deltaX,float deltaY,const char * imageFilePath,bool enablePhysics,const `[`Awerere::EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`Awerere::ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,bool generatesHit,const `[`Awerere::APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` 

Constructor. Uses images as textures.

All pointers passed in will be owned by the game object. Heap objects will be deleted by the object automatically.

#### Parameters
* `name` Name of this game object. 

* `levelName` Name of level that uses this object. 

* `x` x coordinate of the lower left point. 

* `y` y coordinate of the lower left point. 

* `deltaX` Horizontal span of the object. 

* `deltaX` Vertical span of the object. 

* `imageFilePath` Path to the image to be used as texture. 

* `enablePhysics` Whether the object obeys physics. Default is false. 

* `type` Collider type to be assigned to this gameobject. Defaults to NO_COLLIDER 

* `collider` The collider object to be used. Defaults to NULL. 

* `generatesHit` Whether the object generates hit events. Default is false. 

* `physicsMat` Provide a physics material to be used to respond to hit events. Defaults to DefaultPhysicsMat.

#### `public  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1aed2b6c42a232def6ce7ee4d1d8e6d124)`(std::string name,std::string levelName,float x,float y,float deltaX,float deltaY,float & r,float & g,float & b,bool enablePhysics,const `[`Awerere::APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & material,const `[`Awerere::EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`Awerere::ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,bool generatesHit)` 

#### `public  `[`~RGameObject`](#class_rubeus_1_1_r_game_object_1a4c60d9f9133a6f321c50d39b2f2a096e)`()` 

Destructor.

#### `public virtual void `[`begin`](#class_rubeus_1_1_r_game_object_1a92f2fe2f062e45a168f45db52a7f35c7)`()` 

Called by the engine once before the level starts to run.

#### `public virtual void `[`tick`](#class_rubeus_1_1_r_game_object_1ade6d964c655301870cb762c1b9c02966)`()` 

Tick function.

Runs once every frame

#### `public virtual void `[`onHit`](#class_rubeus_1_1_r_game_object_1aa137a57fa68332f4966574f123c9944e)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * hammer,`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * nail,const `[`Awerere::ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & collisionData)` 

User defined function called whenever a hit event is generated.

#### Parameters
* `hammer` The hitting object. 

* `nail` The object getting hit 

* `collisionData` Details of the collision

#### `public inline void `[`addToTickQueue`](#class_rubeus_1_1_r_game_object_1a06e56244cc44db0ab56a2ca38423a546)`()` 

Set this object for tick by update function.

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_r_game_object_1aa066422f65deb25b9d75dac94f46ca50)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

Handles message sent by [Message](#struct_rubeus_1_1_message) system.

Async invokation only

#### Parameters
* `msg` The message data.

#### `protected  `[`RGameObject`](#class_rubeus_1_1_r_game_object_1a3a512ae142f34273d5cfac0177c58a11)`()` 

Protected constructor. Only used to create groups.

# class `Rubeus::RInputManager` 

```
class Rubeus::RInputManager
  : public Rubeus::RMasterComponent
```  

The Input manager. Manages key strokes, mouse buttons, and cursor/scroll inputs.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RInputManager`](#class_rubeus_1_1_r_input_manager_1af61b188e07c8e9aa70c0fd185e4242fd)`(const `[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` & window)` | Constructor.
`public  `[`~RInputManager`](#class_rubeus_1_1_r_input_manager_1aae4dcfbc07a13854788e9b22f4bbef17)`()` | Destructor.
`public void `[`addKeyToKeyBinding`](#class_rubeus_1_1_r_input_manager_1afbfc89b14cd629acb8860f63ea8fde33)`(const std::string & keyBinding,const `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` & keyName)` | Add a key to a keybinding.
`public void `[`addKeysToKeyBinding`](#class_rubeus_1_1_r_input_manager_1a9e8b9f9a738d2ff367b289ffcbde9d32)`(const std::string & keyBinding,const std::vector< `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` > & keyNames)` | Add an array of keys to a keybinding.
`public void `[`activate`](#class_rubeus_1_1_r_input_manager_1aeb7117ef5b3b07cdfe8c356dd5aeca6d)`(const std::string & keyBinding)` | Activate a keybinding.
`public void `[`deactivate`](#class_rubeus_1_1_r_input_manager_1a2cc2fd66220fe8ca02f5321c524eb13b)`(const std::string & keyBinding)` | Deactivate a keybinding.
`public bool `[`isKeyBindingPressed`](#class_rubeus_1_1_r_input_manager_1ac5a50fe841938b99b67f29113be7eba4)`(const std::string & keyBinding)` | Check if a key corresponding to a keybinding is being used.
`public bool `[`isKeyPressed`](#class_rubeus_1_1_r_input_manager_1a437e6b620a3121a02cf775e25e2eea26)`(const `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` & keyName)` | Check whether a key is being pressed.
`public bool `[`isMouseButtonPressed`](#class_rubeus_1_1_r_input_manager_1aaa241d9afe13dcef04a22423c78f3a30)`(const `[`EMouseButtons`](#keys_8h_1ac04ea80a8fa238524f8582b0a66efdce)` & buttonName)` | Check whether a mouse button is being pressed.
`public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getMousePosition`](#class_rubeus_1_1_r_input_manager_1a0e3b50d7deb6568ba309509503ec7d3b)`() const` | Get the current mouse position.
`public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getMouseScroll`](#class_rubeus_1_1_r_input_manager_1a8680633194478de3b2b3e47a85d221b2)`() const` | Get the current mouse scroll values.
`public inline void `[`enable`](#class_rubeus_1_1_r_input_manager_1ae20636f7b9df7cb3f5c0cfcde2fa2c4d)`()` | Enable the Input Manager. All input queries will function normally.
`public inline void `[`disable`](#class_rubeus_1_1_r_input_manager_1a52c9396b8a5ee8cc4df2904d246709db)`()` | Disable the Input Manager. All input queries will return false.
`public virtual void `[`onMessage`](#class_rubeus_1_1_r_input_manager_1a5439f24e8e7324484a2ba50a7d9764ad)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles messages sent by [Message](#struct_rubeus_1_1_message) system asynchronously.

## Members

#### `public  `[`RInputManager`](#class_rubeus_1_1_r_input_manager_1af61b188e07c8e9aa70c0fd185e4242fd)`(const `[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` & window)` 

Constructor.

#### Parameters
* `window` The window object in current use.

#### `public  `[`~RInputManager`](#class_rubeus_1_1_r_input_manager_1aae4dcfbc07a13854788e9b22f4bbef17)`()` 

Destructor.

#### `public void `[`addKeyToKeyBinding`](#class_rubeus_1_1_r_input_manager_1afbfc89b14cd629acb8860f63ea8fde33)`(const std::string & keyBinding,const `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` & keyName)` 

Add a key to a keybinding.

Beware of case-sensitivity

#### Parameters
* `keyBinding` Name of the keybinding. 

* `keyName` Name of the key.

#### `public void `[`addKeysToKeyBinding`](#class_rubeus_1_1_r_input_manager_1a9e8b9f9a738d2ff367b289ffcbde9d32)`(const std::string & keyBinding,const std::vector< `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` > & keyNames)` 

Add an array of keys to a keybinding.

Beware of case-sensitivity

#### Parameters
* `keyBinding` Name of the keybinding. 

* `keyNames` Array of names of the keys.

#### `public void `[`activate`](#class_rubeus_1_1_r_input_manager_1aeb7117ef5b3b07cdfe8c356dd5aeca6d)`(const std::string & keyBinding)` 

Activate a keybinding.

All keybindings are activated by default on startup

#### Parameters
* `keyBinding` The keybinding to be activated.

#### `public void `[`deactivate`](#class_rubeus_1_1_r_input_manager_1a2cc2fd66220fe8ca02f5321c524eb13b)`(const std::string & keyBinding)` 

Deactivate a keybinding.

All keybindings are activated by default on startup

#### Parameters
* `keyBinding` The keybinding to be deactivated.

#### `public bool `[`isKeyBindingPressed`](#class_rubeus_1_1_r_input_manager_1ac5a50fe841938b99b67f29113be7eba4)`(const std::string & keyBinding)` 

Check if a key corresponding to a keybinding is being used.

#### Parameters
* `keyBinding` The keybinding to be checked for use.

#### Returns
Whether any of the keys linked with the keybinding are being pressed.

#### `public bool `[`isKeyPressed`](#class_rubeus_1_1_r_input_manager_1a437e6b620a3121a02cf775e25e2eea26)`(const `[`EKeyboardKeys`](#keys_8h_1ac846721ec08ebc254d389a992230f305)` & keyName)` 

Check whether a key is being pressed.

#### Parameters
* `keyName` The key to be checked for presses.

#### Returns
Whether the key is being pressed.

#### `public bool `[`isMouseButtonPressed`](#class_rubeus_1_1_r_input_manager_1aaa241d9afe13dcef04a22423c78f3a30)`(const `[`EMouseButtons`](#keys_8h_1ac04ea80a8fa238524f8582b0a66efdce)` & buttonName)` 

Check whether a mouse button is being pressed.

#### Parameters
* `buttonName` The button to be checked for presses.

#### Returns
Whether the mouse button is being pressed.

#### `public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getMousePosition`](#class_rubeus_1_1_r_input_manager_1a0e3b50d7deb6568ba309509503ec7d3b)`() const` 

Get the current mouse position.

#### Returns
Vector2D of the mouse position.

#### `public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getMouseScroll`](#class_rubeus_1_1_r_input_manager_1a8680633194478de3b2b3e47a85d221b2)`() const` 

Get the current mouse scroll values.

#### Returns
Vector2D of the mouse scroll values.

#### `public inline void `[`enable`](#class_rubeus_1_1_r_input_manager_1ae20636f7b9df7cb3f5c0cfcde2fa2c4d)`()` 

Enable the Input Manager. All input queries will function normally.

Enabled by default on startup

#### `public inline void `[`disable`](#class_rubeus_1_1_r_input_manager_1a52c9396b8a5ee8cc4df2904d246709db)`()` 

Disable the Input Manager. All input queries will return false.

Input Manager is enabled by default on startup

#### `public virtual void `[`onMessage`](#class_rubeus_1_1_r_input_manager_1a5439f24e8e7324484a2ba50a7d9764ad)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` 

Handles messages sent by [Message](#struct_rubeus_1_1_message) system asynchronously.

Do not call manually

#### Parameters
* `msg` The message sent across.

# class `Rubeus::RLevel` 

A single container from all access to a level's contents.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RLevel`](#class_rubeus_1_1_r_level_1aa6315e5321bcfca5282201a6d64e7d15)`(std::string name)` | Constructor.
`public  `[`~RLevel`](#class_rubeus_1_1_r_level_1aa5dd147b213fb9d63a31a4aa4ba9a1e2)`()` | Destructor.
`public virtual void `[`begin`](#class_rubeus_1_1_r_level_1accfb4374e3deeffc74d45d8d03d3556b)`()` | User overridable on startup script for this level.
`public virtual void `[`onEnd`](#class_rubeus_1_1_r_level_1a1a8159f166bbe90cb22425136609fb5e)`()` | User overridable script called on end of this level.
`public void `[`killAliveObjects`](#class_rubeus_1_1_r_level_1a4776b19d0f8313a3d785910e7b39e502)`()` | Delete active objects.
`public void `[`addGameObject`](#class_rubeus_1_1_r_level_1a2c0545a3e9a6c78f586dc9118ae17b9f)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject)` | Add a gameobject to this level's world.
`public inline std::string `[`getName`](#class_rubeus_1_1_r_level_1aa664e7c62a62134aeff17d50428a543d)`() const` | Get the name of this level.
`public inline `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`getWorld`](#class_rubeus_1_1_r_level_1a488936e1ca061f8deb49d8ed06cd9373)`() const` | Get the world of this level.
`public inline `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`getInputManager`](#class_rubeus_1_1_r_level_1a83010fe62326dc0767a7a041aeff411e)`() const` | Get the input manager of this level.
`public inline `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`getSoundManager`](#class_rubeus_1_1_r_level_1a8d08d9e54f8732f6043c02593d9279c8)`() const` | Get the audio manager of this level.
`protected `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`m_World`](#class_rubeus_1_1_r_level_1a2523b175190f46fac69ba69e79ec2c2e) | The world of this level.
`protected `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`m_InputManager`](#class_rubeus_1_1_r_level_1a332056e3e49dbbde32a3153d46c628a9) | Input manager of this level. All keybindings are level specific.
`protected `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`m_AudioManager`](#class_rubeus_1_1_r_level_1a262dcbba989ac479eb7c6b66d7ce220a) | Audio manager of this level. All tracks are level specific.
`protected std::string `[`m_Name`](#class_rubeus_1_1_r_level_1a62b53a50f4afadf234f3d67e01488cea) | Name of this level. Used to identify game objects to their levels.

## Members

#### `public  `[`RLevel`](#class_rubeus_1_1_r_level_1aa6315e5321bcfca5282201a6d64e7d15)`(std::string name)` 

Constructor.

#### Parameters
* `name` The name of this level.

#### `public  `[`~RLevel`](#class_rubeus_1_1_r_level_1aa5dd147b213fb9d63a31a4aa4ba9a1e2)`()` 

Destructor.

#### `public virtual void `[`begin`](#class_rubeus_1_1_r_level_1accfb4374e3deeffc74d45d8d03d3556b)`()` 

User overridable on startup script for this level.

#### `public virtual void `[`onEnd`](#class_rubeus_1_1_r_level_1a1a8159f166bbe90cb22425136609fb5e)`()` 

User overridable script called on end of this level.

#### `public void `[`killAliveObjects`](#class_rubeus_1_1_r_level_1a4776b19d0f8313a3d785910e7b39e502)`()` 

Delete active objects.

#### `public void `[`addGameObject`](#class_rubeus_1_1_r_level_1a2c0545a3e9a6c78f586dc9118ae17b9f)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject)` 

Add a gameobject to this level's world.

Do not explicitly delete passed in pointers

#### Parameters
* `gameObject` The object pointer to be passed in.

#### `public inline std::string `[`getName`](#class_rubeus_1_1_r_level_1aa664e7c62a62134aeff17d50428a543d)`() const` 

Get the name of this level.

#### Returns
String containing the level name.

#### `public inline `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`getWorld`](#class_rubeus_1_1_r_level_1a488936e1ca061f8deb49d8ed06cd9373)`() const` 

Get the world of this level.

#### Returns
Pointer to the world of this level.

#### `public inline `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`getInputManager`](#class_rubeus_1_1_r_level_1a83010fe62326dc0767a7a041aeff411e)`() const` 

Get the input manager of this level.

#### Returns
Pointer to the input manager of this level.

#### `public inline `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`getSoundManager`](#class_rubeus_1_1_r_level_1a8d08d9e54f8732f6043c02593d9279c8)`() const` 

Get the audio manager of this level.

#### Returns
Pointer to the audio manager of this level.

#### `protected `[`RWorld`](#class_rubeus_1_1_r_world)` * `[`m_World`](#class_rubeus_1_1_r_level_1a2523b175190f46fac69ba69e79ec2c2e) 

The world of this level.

#### `protected `[`RInputManager`](#class_rubeus_1_1_r_input_manager)` * `[`m_InputManager`](#class_rubeus_1_1_r_level_1a332056e3e49dbbde32a3153d46c628a9) 

Input manager of this level. All keybindings are level specific.

#### `protected `[`AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony)` * `[`m_AudioManager`](#class_rubeus_1_1_r_level_1a262dcbba989ac479eb7c6b66d7ce220a) 

Audio manager of this level. All tracks are level specific.

#### `protected std::string `[`m_Name`](#class_rubeus_1_1_r_level_1a62b53a50f4afadf234f3d67e01488cea) 

Name of this level. Used to identify game objects to their levels.

# class `Rubeus::RMasterComponent` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RMasterComponent`](#class_rubeus_1_1_r_master_component_1aecd982f5c7361dbb23bcc8ac5ec6481c)`()` | 
`public virtual  `[`~RMasterComponent`](#class_rubeus_1_1_r_master_component_1a3ee1666371bfafadd5f3adfa67ac874c)`()` | 
`public unsigned int `[`getComponentID`](#class_rubeus_1_1_r_master_component_1ada4b85021d96ac2c2153e613d5f14097)`() const` | 
`public inline std::string `[`getName`](#class_rubeus_1_1_r_master_component_1ad3c9003c4bc64661ed9ae5961c8cf3fa)`()` | Gets the fully qualified name of this component.
`public virtual void `[`onMessage`](#class_rubeus_1_1_r_master_component_1a129a5b04db723423b40cfd4780adcd35)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles message from messaging system.
`protected unsigned int `[`m_ComponentID`](#class_rubeus_1_1_r_master_component_1a838bceba7935bb3b11a5b69def0f0fc0) | Identifier for this component.

## Members

#### `public  `[`RMasterComponent`](#class_rubeus_1_1_r_master_component_1aecd982f5c7361dbb23bcc8ac5ec6481c)`()` 

#### `public virtual  `[`~RMasterComponent`](#class_rubeus_1_1_r_master_component_1a3ee1666371bfafadd5f3adfa67ac874c)`()` 

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

# class `Rubeus::RWorld` 

The container for all gameobjects. Synonymous to Scene graph.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RWorld`](#class_rubeus_1_1_r_world_1a81d955b1a3c3effc3846af9a4b961e1a)`()` | Constructor.
`public  `[`RWorld`](#class_rubeus_1_1_r_world_1ab2158d21d66ff18ab59c6c1f1299128f)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` | Constructor.
`public  `[`~RWorld`](#class_rubeus_1_1_r_world_1a054d7f2e214cf1767cff0e7c7c0d5ce3)`()` | Destructor.
`public void `[`tick`](#class_rubeus_1_1_r_world_1a2a10fa62234ccd19046cb8c244674171)`()` | Call tick functions of all objects in the world once.
`public void `[`add`](#class_rubeus_1_1_r_world_1ae935db3dfaa9f8dc3b82cb60470f2fd4)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & gameObject)` | Add a gameobject to the world.
`public void `[`add`](#class_rubeus_1_1_r_world_1a2cbd561e846ab4aed11b502582c6649b)`(const std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` | Add an array of gameobjects to the world.
`public inline void `[`setObjectArray`](#class_rubeus_1_1_r_world_1a4cc8ab3e46cb4fc5e9d428384231a809)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` | Set the array of gameObjects in use.
`public inline std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` * > & `[`getActiveObjects`](#class_rubeus_1_1_r_world_1a91e730bb4e177d4d59c2c6c6fd04ccda)`() const` | Returns the array of gameObjects in use.

## Members

#### `public  `[`RWorld`](#class_rubeus_1_1_r_world_1a81d955b1a3c3effc3846af9a4b961e1a)`()` 

Constructor.

#### `public  `[`RWorld`](#class_rubeus_1_1_r_world_1ab2158d21d66ff18ab59c6c1f1299128f)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` 

Constructor.

#### Parameters
* `gameObjects` An array of gameObjects.

#### `public  `[`~RWorld`](#class_rubeus_1_1_r_world_1a054d7f2e214cf1767cff0e7c7c0d5ce3)`()` 

Destructor.

#### `public void `[`tick`](#class_rubeus_1_1_r_world_1a2a10fa62234ccd19046cb8c244674171)`()` 

Call tick functions of all objects in the world once.

#### `public void `[`add`](#class_rubeus_1_1_r_world_1ae935db3dfaa9f8dc3b82cb60470f2fd4)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & gameObject)` 

Add a gameobject to the world.

#### Parameters
* `gameObject` The gameobject to be added.

#### `public void `[`add`](#class_rubeus_1_1_r_world_1a2cbd561e846ab4aed11b502582c6649b)`(const std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` 

Add an array of gameobjects to the world.

#### Parameters
* `gameObject` The gameobject to be added.

#### `public inline void `[`setObjectArray`](#class_rubeus_1_1_r_world_1a4cc8ab3e46cb4fc5e9d428384231a809)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects)` 

Set the array of gameObjects in use.

#### Parameters
* `gameObjects` Array of gameObjects in use.

#### `public inline std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` * > & `[`getActiveObjects`](#class_rubeus_1_1_r_world_1a91e730bb4e177d4d59c2c6c6fd04ccda)`() const` 

Returns the array of gameObjects in use.

#### Returns
The gameObject array in use

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
`enum `[`ETrackName`](#audio__manager__component_8h_1a48f892bb3f261a22692cf2770f5463b9)            | 
`enum `[`ETrackType`](#audio__manager__component_8h_1a58c80b502626bade8073fadfac19adc5)            | 
`class `[`Rubeus::AudioComponents::RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony) | Manages audio loading, cueing and audio effects.

## Members

#### `enum `[`ETrackName`](#audio__manager__component_8h_1a48f892bb3f261a22692cf2770f5463b9) 

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

#### `enum `[`ETrackType`](#audio__manager__component_8h_1a58c80b502626bade8073fadfac19adc5) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
SOUND_TRACK            | 
MUSIC_TRACK            | 

# class `Rubeus::AudioComponents::RSymphony` 

```
class Rubeus::AudioComponents::RSymphony
  : public Rubeus::RMasterComponent
```  

Manages audio loading, cueing and audio effects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a05158fa67afff1aa3d41f97644000d62)`()` | Constructor.
`public  `[`~RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a7c3c4d8176470c11fb2afc6a07d660a7)`()` | Destructor.
`public void `[`addSoundTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1aae4f90666e9b8628aecebdbe970e90b1)`(const int count)` | Adds sound tracks to be used later to load sound effect files.
`public void `[`addMusicTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1abe8be79436074477c6f8c03a47bb2df1)`(const int count)` | Adds music tracks to be used later to play music.
`public void `[`loadTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a8693b1aae45f6af05478cfa29f80ef4e)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,std::string filePath,float volume,bool loopEnabled)` | Load an audio file to a music track.
`public void `[`playTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a5fcf33dbb92cb783ce7329157b495a92)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Play a track.
`public void `[`pauseTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a449d8649964c9b46fa3a5d5b3c234af5)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Pause a track.
`public void `[`stopTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a60d2a5c59c3c747cae9eada0e442a312)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` | Stop a track.
`public void `[`stepDownMusicVolume`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1aeea0b74c635baebea5069a87152155fd)`(const float duration,const float floorVolume)` | Steps down the volume.
`public void `[`setVolume`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a36012e93fac49fba23fff44b21b03df1)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float volume)` | Sets the volume for a track.
`public void `[`setPitch`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1af17e2d7324ad6870da11c606fb81bed9)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float pitch)` | Sets the pitch for a track.
`public void `[`addToTick`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1af5783ab1abd424de29b2c86519975d93)`(void(*)() function)` | Adds a function to be ticked by the audio manager.
`public void `[`tick`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a8115634b201ab5662f493158a1d26824)`()` | Ticks the tickable functions added to audio manager.
`protected virtual void `[`onMessage`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a7878d51e9364d7ae2268a9d11b0a8a31)`(`[`Rubeus::Message`](#struct_rubeus_1_1_message)` * msg)` | [Message](#struct_rubeus_1_1_message) handler for audio manager.

## Members

#### `public  `[`RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a05158fa67afff1aa3d41f97644000d62)`()` 

Constructor.

#### `public  `[`~RSymphony`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a7c3c4d8176470c11fb2afc6a07d660a7)`()` 

Destructor.

#### `public void `[`addSoundTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1aae4f90666e9b8628aecebdbe970e90b1)`(const int count)` 

Adds sound tracks to be used later to load sound effect files.

Keep track of how many tracks are actually needed

#### Parameters
* `count` The number of tracks to be constructed.

#### `public void `[`addMusicTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1abe8be79436074477c6f8c03a47bb2df1)`(const int count)` 

Adds music tracks to be used later to play music.

Keep track of how many tracks are actually needed

#### Parameters
* `count` The number of tracks to be constructed.

#### `public void `[`loadTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a8693b1aae45f6af05478cfa29f80ef4e)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,std::string filePath,float volume,bool loopEnabled)` 

Load an audio file to a music track.

Default volume is 50.0f (max volume is 100.0f)

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK 

* `trackName` Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `filePath` Path to the sound file 

* `volume` Volume to be set. Default is 50 

* `loopEnabled` Whether the music should loop when it ends. Default is false.

#### `public void `[`playTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a5fcf33dbb92cb783ce7329157b495a92)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Play a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`pauseTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a449d8649964c9b46fa3a5d5b3c234af5)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Pause a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`stopTrack`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a60d2a5c59c3c747cae9eada0e442a312)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName)` 

Stop a track.

Do not use track IDs that are not yet added

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.

#### `public void `[`stepDownMusicVolume`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1aeea0b74c635baebea5069a87152155fd)`(const float duration,const float floorVolume)` 

Steps down the volume.

Used only for fade outs/fade ins

#### Parameters
* `duration` Duration of fade effect. 

* `floorVolume` Volume to stop the fade effect at.

#### `public void `[`setVolume`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a36012e93fac49fba23fff44b21b03df1)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float volume)` 

Sets the volume for a track.

Volume ranges from 0.0f to 100.0f

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `volume` The volume to set to.

#### `public void `[`setPitch`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1af17e2d7324ad6870da11c606fb81bed9)`(`[`ETrackType`](#class_e_track_type)` trackType,`[`ETrackName`](#class_e_track_name)` trackName,const float pitch)` 

Sets the pitch for a track.

Default pitch is 1. Changing pitch also affects the audio duration

#### Parameters
* `trackType` Type of track. Use SOUND_TRACK or MUSIC_TRACK. 

* `trackName` Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20. 

* `pitch` The pitch to set to.

#### `public void `[`addToTick`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1af5783ab1abd424de29b2c86519975d93)`(void(*)() function)` 

Adds a function to be ticked by the audio manager.

Type_a_warning_with_its_use

#### Parameters
* `function` Function pointer to be woken up at tick.

#### `public void `[`tick`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a8115634b201ab5662f493158a1d26824)`()` 

Ticks the tickable functions added to audio manager.

#### `protected virtual void `[`onMessage`](#class_rubeus_1_1_audio_components_1_1_r_symphony_1a7878d51e9364d7ae2268a9d11b0a8a31)`(`[`Rubeus::Message`](#struct_rubeus_1_1_message)` * msg)` 

[Message](#struct_rubeus_1_1_message) handler for audio manager.

To be used by the message system only

#### Parameters
* `msg` Pointer to the message received.

# namespace `Rubeus::Awerere` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)            | Specifiers for initialising different types of colliders.
`class `[`Rubeus::Awerere::ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider) | A box collider attached to a Game object through a Physics object.
`class `[`Rubeus::Awerere::ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data) | A container holding information related to detected collisions.
`class `[`Rubeus::Awerere::ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider) | A simple collider. Used to resolve collisions.
`class `[`Rubeus::Awerere::ACollisionEngine`](#class_rubeus_1_1_awerere_1_1_a_collision_engine) | The collision engine responsible for resolution of collisions and generating hit events.
`class `[`Rubeus::Awerere::AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag) | Array based collection of collision flag used in grid based resolution.
`class `[`Rubeus::Awerere::AHitEventList`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list) | List of generated Hit events by collision engine.
`class `[`Rubeus::Awerere::APhysicsEngine`](#class_rubeus_1_1_awerere_1_1_a_physics_engine) | Apply physics behaviours to gameobjects.
`class `[`Rubeus::Awerere::APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material) | A physics material used to characterise physics objects.
`class `[`Rubeus::Awerere::APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object) | A Physics Object that is used for all collision detection and responses.
`class `[`Rubeus::Awerere::APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider) | 
`class `[`Rubeus::Awerere::ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider) | A Sphere Collider for handling spherical collisions.
`struct `[`Rubeus::Awerere::CollisionGrid`](#struct_rubeus_1_1_awerere_1_1_collision_grid) | Grid of cells arranged in a 2D matrix fashion.

## Members

#### `enum `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
SPHERE            | 
PLANE            | 
BOX            | 
NO_COLLIDER            | 

Specifiers for initialising different types of colliders.

# class `Rubeus::Awerere::ABoxCollider` 

```
class Rubeus::Awerere::ABoxCollider
  : public Rubeus::Awerere::ACollider
```  

A box collider attached to a Game object through a Physics object.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_MinExtent`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a76725863d20593af6992d496fc083045) | Lower left coordinates of the box collider.
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_MaxExtent`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a5deaee32ade54cb23e886cdc1b8dbe8f) | Upper right coordinates of the box collider.
`public  `[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1af82f5a293450e3d45b962ec0ac7a9018)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & minExtent,const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & maxExtent)` | Contructor.
`public  `[`~ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a5b3d61f82c3629649a8d2f92595bf838)`()` | Destructor.
`public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a9cb8b9a6d310ffd4c1eb7341b7fa660c)`(float deltaX,float deltaY)` | Update the type specific paramaters of this collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a07938b065f35454887ec6f728ae8a55d)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` | Returns collision status between 2 different colliders.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a6ce8d043e6d69c4e01596bfd51c35e14)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` | Query collision status with another plane type collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a33ff855764ca01bc28021162c652ede3)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` | Query collision status with another sphere type collider.
`public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getLowerLeftBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1abe7fc5858243e7db418809d7a781f590)`() const` | Returns the lower left corner of the box collider.
`public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getUpperRightBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1af9e0aaed35f689a6acc8da115c51d647)`() const` | Returns the upper right corner of the box collider.
`public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getUpperLeftBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a7891f0d698ca55f899f34ebffdb84524)`() const` | Returns the upper left corner of the box collider.
`public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getLowerRightBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a9337b5b543f7157f1fc49bea74e77287)`() const` | Returns the lower right corner of the box collider.

## Members

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_MinExtent`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a76725863d20593af6992d496fc083045) 

Lower left coordinates of the box collider.

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`m_MaxExtent`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a5deaee32ade54cb23e886cdc1b8dbe8f) 

Upper right coordinates of the box collider.

#### `public  `[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1af82f5a293450e3d45b962ec0ac7a9018)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & minExtent,const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & maxExtent)` 

Contructor.

#### Parameters
* `minExtent` The lower left point of the box. 

* `maxExtent` The upper right point of the box.

#### `public  `[`~ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a5b3d61f82c3629649a8d2f92595bf838)`()` 

Destructor.

#### `public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a9cb8b9a6d310ffd4c1eb7341b7fa660c)`(float deltaX,float deltaY)` 

Update the type specific paramaters of this collider.

Used only inside Awerere

#### Parameters
* `deltaX` Change in X position. 

* `deltaY` Change in Y position.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a07938b065f35454887ec6f728ae8a55d)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` 

Returns collision status between 2 different colliders.

#### Parameters
* `box` The box collider to try a collision with.

#### Returns
Collide data, containing collision information.

#### Parameters
* `plane` The plane collider to try a collision with.

#### Returns
Collide data, containing collision information.

#### Parameters
* `sphere` The sphere collider to try a collision with.

#### Returns
Collide data, containing collision information.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a6ce8d043e6d69c4e01596bfd51c35e14)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` 

Query collision status with another plane type collider.

Requires a 2D plane collider (straight line)

#### Parameters
* `plane` The plane collider this collider is being queried with.

#### Returns
Collision data.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a33ff855764ca01bc28021162c652ede3)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` 

Query collision status with another sphere type collider.

Requires a 3D sphere collider (circle colliders will work too)

#### Parameters
* `sphere` The sphere collider this collider is being queried with.

#### Returns
Collision data.

#### `public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getLowerLeftBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1abe7fc5858243e7db418809d7a781f590)`() const` 

Returns the lower left corner of the box collider.

#### Returns
The lower left corner's position.

#### `public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getUpperRightBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1af9e0aaed35f689a6acc8da115c51d647)`() const` 

Returns the upper right corner of the box collider.

#### Returns
The upper right corner's position.

#### `public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getUpperLeftBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a7891f0d698ca55f899f34ebffdb84524)`() const` 

Returns the upper left corner of the box collider.

#### Returns
The upper left corner's position.

#### `public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getLowerRightBound`](#class_rubeus_1_1_awerere_1_1_a_box_collider_1a9337b5b543f7157f1fc49bea74e77287)`() const` 

Returns the lower right corner of the box collider.

#### Returns
The lower right corner's position.

# class `Rubeus::Awerere::ACollideData` 

A container holding information related to detected collisions.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1ad79cdd0023cfc6d65028193528ecce14)`(const bool isIntersect,const float gap,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` collisionNormal)` | Constructor.
`public  `[`~ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1a30cee04ee5ff42c23beabd201fa3c6be)`()` | Destructor.
`public inline const bool & `[`getIsIntersect`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1af4d3410dab0c62879aaf014372acc9ce)`() const` | Returns if the colliders have intersected.
`public inline const float & `[`getGap`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1a3b367a80c633e614d2aaa2ee92cbb9e5)`() const` | Returns the separation gap between the colliders.
`public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getCollisionNormal`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1ada2d967843fb9e84bae350d4a58af127)`() const` | Returns the collision normal.

## Members

#### `public  `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1ad79cdd0023cfc6d65028193528ecce14)`(const bool isIntersect,const float gap,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` collisionNormal)` 

Constructor.

#### Parameters
* `isIntersect` Bool containing if the colliders are intersecting. 

* `gap` The penetration distance of the collision. 

* `collisionNormal` The normal vector of the collision

#### `public  `[`~ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1a30cee04ee5ff42c23beabd201fa3c6be)`()` 

Destructor.

#### `public inline const bool & `[`getIsIntersect`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1af4d3410dab0c62879aaf014372acc9ce)`() const` 

Returns if the colliders have intersected.

#### Returns
The intersection boolean.

#### `public inline const float & `[`getGap`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1a3b367a80c633e614d2aaa2ee92cbb9e5)`() const` 

Returns the separation gap between the colliders.

#### Returns
The gap in float.

#### `public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getCollisionNormal`](#class_rubeus_1_1_awerere_1_1_a_collide_data_1ada2d967843fb9e84bae350d4a58af127)`() const` 

Returns the collision normal.

#### Returns
A Vector2D containing co-ordinates of the collision normal.

# class `Rubeus::Awerere::ACollider` 

A simple collider. Used to resolve collisions.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`m_Position`](#class_rubeus_1_1_awerere_1_1_a_collider_1a86402823b299a7211ab6d2d11c2e512f) | The central position of the collider.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Momentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1a55dd70e134b80d3e64dc3ee5df5388fc) | Momentum of the collider in 2D space.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Force`](#class_rubeus_1_1_awerere_1_1_a_collider_1a3aea1286d1c31ff389717b07edfe391c) | The force being applied on this collider.
`public `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` `[`m_PhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_collider_1abb9155531aa52189943aae04d7a506c2) | The physical constants describing the material of this collider.
`public `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` `[`m_Type`](#class_rubeus_1_1_awerere_1_1_a_collider_1afac145eb6d70d70e822923b92f1f56d6) | Type of the collider.
`public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_awerere_1_1_a_collider_1a929eacdcc3a29b8b598666085560b442) | The sprite linked to this collider.
`public  `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0584d41544674acb77f11cfe038fd1ea)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position)` | Contructor.
`public  `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1af4862ef42d5f94e16ff3602219b19e83)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & position,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & velocity,const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` | Contructor.
`public virtual  `[`~ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1a10873a3ab1cc36d56b4bf72a9a4c82f4)`()` | Destructor.
`public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0c1bf6dacc6f411a4073843d61458c7f)`(`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` & collider)` | Generate collision status data object to see if object collides with another.
`public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1ac9295068ab11ba7b11e7d18f453298bc)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` | Query collision status with another box type collider.
`public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a5a6b4e7886914d394913e570ecbf1fb4)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` | Query collision status with another sphere type collider.
`public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a18c5893ff435d68cb7495f9c9ddd6d48)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` | Query collision status with another plane type collider.
`public void `[`update`](#class_rubeus_1_1_awerere_1_1_a_collider_1a5f81c81e2a0675319f56a73e30a34e92)`(const float & deltaTime)` | Update the collider member positions.
`public void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_collider_1ab0088d47ab69b3ecb0b0a020de8c33d6)`(float deltaX,float deltaY)` | Update the collider position for members specific to a collider type.
`public void `[`addImpulse`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0f91e5056fe7e045865ac60149b83498)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & impulse)` | Add an impulse to this object.
`public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getPosition`](#class_rubeus_1_1_awerere_1_1_a_collider_1add6aa6d6bf8e9c47bb5f9262c048d3e3)`() const` | Returns the position of this position.
`public inline `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`getMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1af7297ef1a5bcc7a82a8c8110a707d37a)`() const` | Returns the momentum of this position.
`public inline `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` `[`getType`](#class_rubeus_1_1_awerere_1_1_a_collider_1a8d4f849d8d22325ac84e8f9d3ecaa74b)`() const` | Returns the type of this collider.
`public inline void `[`setPosition`](#class_rubeus_1_1_awerere_1_1_a_collider_1aebc1dbcdc45a252b38415d3bf23be6b3)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & position)` | Set the position of this collider.
`public inline void `[`setMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0293d08639bec4bdd80700da27962855)`(const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & momentum)` | Set the momentum of this collider.
`public inline void `[`setMaterial`](#class_rubeus_1_1_awerere_1_1_a_collider_1afc3bb37605b7032fa75164eea443a199)`(const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` | Set a custom physics material for this collider.
`public inline void `[`addForce`](#class_rubeus_1_1_awerere_1_1_a_collider_1af4393723cdffa3620d8e3deb3e3fe92f)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & force)` | Add a force on this collider.
`public inline void `[`addMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1ac65dfdf1c393552fe031af59af2a76cf)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & momentum)` | Add momentum to this collider.

## Members

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`m_Position`](#class_rubeus_1_1_awerere_1_1_a_collider_1a86402823b299a7211ab6d2d11c2e512f) 

The central position of the collider.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Momentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1a55dd70e134b80d3e64dc3ee5df5388fc) 

Momentum of the collider in 2D space.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Force`](#class_rubeus_1_1_awerere_1_1_a_collider_1a3aea1286d1c31ff389717b07edfe391c) 

The force being applied on this collider.

#### `public `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` `[`m_PhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_collider_1abb9155531aa52189943aae04d7a506c2) 

The physical constants describing the material of this collider.

#### `public `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` `[`m_Type`](#class_rubeus_1_1_awerere_1_1_a_collider_1afac145eb6d70d70e822923b92f1f56d6) 

Type of the collider.

#### `public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_awerere_1_1_a_collider_1a929eacdcc3a29b8b598666085560b442) 

The sprite linked to this collider.

#### `public  `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0584d41544674acb77f11cfe038fd1ea)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position)` 

Contructor.

#### `public  `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1af4862ef42d5f94e16ff3602219b19e83)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & position,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & velocity,const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` 

Contructor.

#### Parameters
* `position` The position of the collider. 

* `velocity` The velocity of the collider. 

* `physicsMat` The physics material of this collider. Default is DefualtMaterial

#### `public virtual  `[`~ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider_1a10873a3ab1cc36d56b4bf72a9a4c82f4)`()` 

Destructor.

#### `public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0c1bf6dacc6f411a4073843d61458c7f)`(`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` & collider)` 

Generate collision status data object to see if object collides with another.

#### Parameters
* `collider` The collider object to test against.

#### Returns
A struct containing collision status data.

#### `public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1ac9295068ab11ba7b11e7d18f453298bc)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` 

Query collision status with another box type collider.

Requires a 2D box collider

#### Parameters
* `box` The box collider this collider is being queried with.

#### Returns
Collision data.

#### `public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a5a6b4e7886914d394913e570ecbf1fb4)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` 

Query collision status with another sphere type collider.

Requires a 3D sphere collider (circle colliders will work too)

#### Parameters
* `sphere` The sphere collider this collider is being queried with.

#### Returns
Collision data.

#### `public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_collider_1a18c5893ff435d68cb7495f9c9ddd6d48)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` 

Query collision status with another plane type collider.

Requires a 2D plane collider (straight line)

#### Parameters
* `plane` The plane collider this collider is being queried with.

#### Returns
Collision data.

#### `public void `[`update`](#class_rubeus_1_1_awerere_1_1_a_collider_1a5f81c81e2a0675319f56a73e30a34e92)`(const float & deltaTime)` 

Update the collider member positions.

#### Parameters
* `deltaTime` Time step taken.

#### `public void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_collider_1ab0088d47ab69b3ecb0b0a020de8c33d6)`(float deltaX,float deltaY)` 

Update the collider position for members specific to a collider type.

Defined differently for each collider

#### Parameters
* `deltaX` Change in X. 

* `deltaY` Change in Y.

#### `public void `[`addImpulse`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0f91e5056fe7e045865ac60149b83498)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & impulse)` 

Add an impulse to this object.

#### Parameters
* `impulse` The impulse to be applied.

#### `public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getPosition`](#class_rubeus_1_1_awerere_1_1_a_collider_1add6aa6d6bf8e9c47bb5f9262c048d3e3)`() const` 

Returns the position of this position.

#### Returns
Position of this collider.

#### `public inline `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`getMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1af7297ef1a5bcc7a82a8c8110a707d37a)`() const` 

Returns the momentum of this position.

#### Returns
Momentum of this collider.

#### `public inline `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` `[`getType`](#class_rubeus_1_1_awerere_1_1_a_collider_1a8d4f849d8d22325ac84e8f9d3ecaa74b)`() const` 

Returns the type of this collider.

#### Returns
Type of this collider.

#### `public inline void `[`setPosition`](#class_rubeus_1_1_awerere_1_1_a_collider_1aebc1dbcdc45a252b38415d3bf23be6b3)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & position)` 

Set the position of this collider.

#### Parameters
* `position` The newer position value.

#### `public inline void `[`setMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1a0293d08639bec4bdd80700da27962855)`(const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & momentum)` 

Set the momentum of this collider.

#### Parameters
* `momentum` The new momentum value.

#### `public inline void `[`setMaterial`](#class_rubeus_1_1_awerere_1_1_a_collider_1afc3bb37605b7032fa75164eea443a199)`(const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & physicsMat)` 

Set a custom physics material for this collider.

#### Parameters
* `physicsMat` The physics material to be used.

#### `public inline void `[`addForce`](#class_rubeus_1_1_awerere_1_1_a_collider_1af4393723cdffa3620d8e3deb3e3fe92f)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & force)` 

Add a force on this collider.

#### Parameters
* `force` The force to be applied.

#### `public inline void `[`addMomentum`](#class_rubeus_1_1_awerere_1_1_a_collider_1ac65dfdf1c393552fe031af59af2a76cf)`(`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & momentum)` 

Add momentum to this collider.

#### Parameters
* `momentum` The momentum to be added.

# class `Rubeus::Awerere::ACollisionEngine` 

The collision engine responsible for resolution of collisions and generating hit events.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`ACollisionEngine`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1ae32f0c7d77c6ec909d87d1d713f041d2)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects,const float & gridHeight,const float & gridWidth,const float & cellHeight,const float & cellWidth)` | Constructor.
`public  `[`~ACollisionEngine`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a2936d5dc03b4aaa5fdfb3ee09549156b)`()` | Destructor.
`public void `[`updateAndAssignFlags`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1affca621eb858280450ef062113489db8)`(const float & deltaTime)` | Assign grid flags for each game object.
`public void `[`checkCollisions`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a7cbbee2bec17e37f9a81932014cafd99)`(const int & i)` | A helper function to check collision from the a particular index in the world object array.
`public void `[`collisionResolution`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a3264d72341c146ad798917e3c99ba7af)`()` | Attempt a broadphase resolution.
`public void `[`narrowPhaseResolution`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a43d66552404118da1e887932f59f5511)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & left,`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & right)` | Attempt narrowphase resolution on positive results of braodphase resolution.
`public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`multiplexColliders`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a5746ede74951390f775e2eeb8c917056)`(`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * left,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & leftType,`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * right,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & rightType)` | Invoke collider specific collision algorithms on arguemnts based on the multiplexed collider type.
`public inline void `[`setGameObjectArray`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1ac0e5a4aefa5601396a77a88c108b14f6)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> gameObjects)` | 

## Members

#### `public  `[`ACollisionEngine`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1ae32f0c7d77c6ec909d87d1d713f041d2)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> & gameObjects,const float & gridHeight,const float & gridWidth,const float & cellHeight,const float & cellWidth)` 

Constructor.

#### Parameters
* `gameobjects` Reference to array of active gameobjects. 

* `gridHeight` Height of collision grid. 

* `gridWidth` Width of collision grid. 

* `cellWidth` Width of collision grid cell. 

* `cellWidth` Width of collision grid cell.

#### `public  `[`~ACollisionEngine`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a2936d5dc03b4aaa5fdfb3ee09549156b)`()` 

Destructor.

#### `public void `[`updateAndAssignFlags`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1affca621eb858280450ef062113489db8)`(const float & deltaTime)` 

Assign grid flags for each game object.

Uses a 2D grid

#### Parameters
* `The` timestep for the update

#### `public void `[`checkCollisions`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a7cbbee2bec17e37f9a81932014cafd99)`(const int & i)` 

A helper function to check collision from the a particular index in the world object array.

#### Parameters
* `i` The gameobject index.

#### `public void `[`collisionResolution`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a3264d72341c146ad798917e3c99ba7af)`()` 

Attempt a broadphase resolution.

#### `public void `[`narrowPhaseResolution`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a43d66552404118da1e887932f59f5511)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & left,`[`RGameObject`](#class_rubeus_1_1_r_game_object)` & right)` 

Attempt narrowphase resolution on positive results of braodphase resolution.

#### Parameters
* `left` The left argument. 

* `right` The right argument.

#### `public `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`multiplexColliders`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1a5746ede74951390f775e2eeb8c917056)`(`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * left,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & leftType,`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * right,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & rightType)` 

Invoke collider specific collision algorithms on arguemnts based on the multiplexed collider type.

Select lines are EColliderType values

#### Parameters
* `left` Left collider. 

* `leftType` Type of Left collider. 

* `right` Right collider. 

* `rightType` Type of right collider.

#### Returns
Collision data.

#### `public inline void `[`setGameObjectArray`](#class_rubeus_1_1_awerere_1_1_a_collision_engine_1ac0e5a4aefa5601396a77a88c108b14f6)`(std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` *> gameObjects)` 

# class `Rubeus::Awerere::AFlag` 

Array based collection of collision flag used in grid based resolution.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::vector< bool > `[`m_Data`](#class_rubeus_1_1_awerere_1_1_a_flag_1a4eb75ebb0c7559becf2fd5948ea6a250) | 
`public  `[`AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag_1a5bf7736d7a10fd256a626ab46e393b11)`(const int & bufferSize)` | Constructor.
`public  `[`~AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag_1a0e9eb803d966b6dd1dfa019c51a4edd7)`()` | Destructor.
`public bool `[`operator*`](#class_rubeus_1_1_awerere_1_1_a_flag_1a187b8287e5ac2734b5e0fecc0a965b8b)`(`[`AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag)` & right)` | Operates multiplication on flag values.
`public inline const size_t & `[`getLength`](#class_rubeus_1_1_awerere_1_1_a_flag_1a8a1dee9787d492dfb1f053d9727a3100)`() const` | Return the length of this flag.

## Members

#### `public std::vector< bool > `[`m_Data`](#class_rubeus_1_1_awerere_1_1_a_flag_1a4eb75ebb0c7559becf2fd5948ea6a250) 

#### `public  `[`AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag_1a5bf7736d7a10fd256a626ab46e393b11)`(const int & bufferSize)` 

Constructor.

Set BufferSize by using AFlag::SetBufferSize() to use inside Awerere.

#### Parameters
* `bufferSize` Flags buffer size. Default value is BufferSize. If BufferSize is not set before hand, then default is 1. Unusable by Awerere if BufferSize is not set.

#### `public  `[`~AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag_1a0e9eb803d966b6dd1dfa019c51a4edd7)`()` 

Destructor.

#### `public bool `[`operator*`](#class_rubeus_1_1_awerere_1_1_a_flag_1a187b8287e5ac2734b5e0fecc0a965b8b)`(`[`AFlag`](#class_rubeus_1_1_awerere_1_1_a_flag)` & right)` 

Operates multiplication on flag values.

Verify length of flag before sending in.

#### Parameters
* `right` Right side of operator.

#### Returns
Result of OR operation.

#### `public inline const size_t & `[`getLength`](#class_rubeus_1_1_awerere_1_1_a_flag_1a8a1dee9787d492dfb1f053d9727a3100)`() const` 

Return the length of this flag.

#### Returns
The length of this flag (not in bytes, but count).

# class `Rubeus::Awerere::AHitEventList` 

List of generated Hit events by collision engine.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`AHitEventList`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1ab6ec34aa632092abd740027022cb6aea)`()` | Constructor.
`public  `[`~AHitEventList`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1a51eff8229c48a200ba14d93014b96be7)`()` | Destructor.
`public void `[`push`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1ad4a2989b10bda71222721016e08487a9)`(const `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & additive)` | Push a confirmed hit event to queue.
`public void `[`push`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1af63ac1201735d601c62c13e85f737597)`(const bool & intersect,const bool & gap,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & collisionNormal)` | Generate a hit event and add to queue.
`public const `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & `[`pop`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1a60fce2cb441329461e816d58cc24f543)`()` | Pop a hit event from the queue.

## Members

#### `public  `[`AHitEventList`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1ab6ec34aa632092abd740027022cb6aea)`()` 

Constructor.

#### `public  `[`~AHitEventList`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1a51eff8229c48a200ba14d93014b96be7)`()` 

Destructor.

#### `public void `[`push`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1ad4a2989b10bda71222721016e08487a9)`(const `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & additive)` 

Push a confirmed hit event to queue.

#### Parameters
* `additive` Collision data from hit.

#### `public void `[`push`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1af63ac1201735d601c62c13e85f737597)`(const bool & intersect,const bool & gap,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & collisionNormal)` 

Generate a hit event and add to queue.

#### Parameters
* `intersect` If colliders have intersected. 

* `gap` Amount of gap. 

* `collisionNormal` Collision normal.

#### `public const `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` & `[`pop`](#struct_rubeus_1_1_awerere_1_1_a_hit_event_list_1a60fce2cb441329461e816d58cc24f543)`()` 

Pop a hit event from the queue.

#### Returns
Confirmed hit data.

# class `Rubeus::Awerere::APhysicsEngine` 

Apply physics behaviours to gameobjects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`APhysicsEngine`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a9a223e4771ccfba58e7e5db5b0774c72)`(`[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` & windowComponent,`[`RWorld`](#class_rubeus_1_1_r_world)` & world,const float & cellHeight,const float & cellWidth)` | Constructor.
`public  `[`~APhysicsEngine`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1aec828076671ca042660dc78af46601a1)`()` | Destructor.
`public void `[`update`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1aa0239c326459a1d1575c2a8218d14288)`(const float deltaTime)` | Carry-out frame wise physics update to world.
`public void `[`stopImpulses`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a18001114e1a3502170df377681773f5c)`()` | Stops adding impulses and reverts those been added already to the scene.
`public void `[`setWorld`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a39971593960dc144d5a2e7d90e818c1c)`(`[`RWorld`](#class_rubeus_1_1_r_world)` & world)` | Set the world being used to be used in update.

## Members

#### `public  `[`APhysicsEngine`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a9a223e4771ccfba58e7e5db5b0774c72)`(`[`GraphicComponents::RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` & windowComponent,`[`RWorld`](#class_rubeus_1_1_r_world)` & world,const float & cellHeight,const float & cellWidth)` 

Constructor.

#### Parameters
* `windowComponent` Window component currently in use. 

* `world` The world instantiated in this run. 

* `cellHeight` Cell height of collision grid. 

* `cellWidth` Cell width of collision grid.

#### `public  `[`~APhysicsEngine`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1aec828076671ca042660dc78af46601a1)`()` 

Destructor.

#### `public void `[`update`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1aa0239c326459a1d1575c2a8218d14288)`(const float deltaTime)` 

Carry-out frame wise physics update to world.

#### Parameters
* `deltaTime` Time passed since last update.

#### `public void `[`stopImpulses`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a18001114e1a3502170df377681773f5c)`()` 

Stops adding impulses and reverts those been added already to the scene.

#### `public void `[`setWorld`](#class_rubeus_1_1_awerere_1_1_a_physics_engine_1a39971593960dc144d5a2e7d90e818c1c)`(`[`RWorld`](#class_rubeus_1_1_r_world)` & world)` 

Set the world being used to be used in update.

Keep track of multiple gameObject arrays if active

#### Parameters
* `world` World object in use.

# class `Rubeus::Awerere::APhysicsMaterial` 

A physics material used to characterise physics objects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`m_EnableCollision`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aa58e961a07c02db756d46d8ba62089bd) | Whether enables collision for this type of material or not.
`public float `[`m_Mass`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ab6929a66134b29ba9c42cdb47b5e4d74) | Value of mass of this physics object.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Gravity`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ad3c24c2d6648c64a7f267c4eea4a2cb5) | Gravity vector acting on a physics object.
`public float `[`m_CoefficientOfFriction`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a539ab50b573ad21066e0a6cf9884fdae) | Coefficient of friction of this physics material.
`public float `[`m_CoefficientOfRestitution`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ace8534fa774030fd3b3ca4084462bbf3) | Coefficient of restitution of this physics material.
`public  `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aa55773762b3181ea503f972f7d5ec9cf)`()` | Constructor.
`public  `[`~APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a19b25f6a11ac6f03b418dc902e5c096d)`()` | Destructor.
`public void `[`makeMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aaf93f21ccd15fd93894af24ba74463fa)`(const float & mass,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & gravity,const float & friction,const float & restitution)` | Make a material with by specifying physics constants.
`public inline bool `[`isCollisionEnabled`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a7acfbdb1c0001423f4a23fb77b7fc710)`() const` | Returns if the material has collision enabled.
`public inline void `[`setCollision`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ad4cef6d4876687c1cf3b94c385760249)`(bool override)` | Sets the collision parameter.

## Members

#### `public bool `[`m_EnableCollision`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aa58e961a07c02db756d46d8ba62089bd) 

Whether enables collision for this type of material or not.

#### `public float `[`m_Mass`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ab6929a66134b29ba9c42cdb47b5e4d74) 

Value of mass of this physics object.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` `[`m_Gravity`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ad3c24c2d6648c64a7f267c4eea4a2cb5) 

Gravity vector acting on a physics object.

#### `public float `[`m_CoefficientOfFriction`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a539ab50b573ad21066e0a6cf9884fdae) 

Coefficient of friction of this physics material.

#### `public float `[`m_CoefficientOfRestitution`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ace8534fa774030fd3b3ca4084462bbf3) 

Coefficient of restitution of this physics material.

#### `public  `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aa55773762b3181ea503f972f7d5ec9cf)`()` 

Constructor.

#### `public  `[`~APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a19b25f6a11ac6f03b418dc902e5c096d)`()` 

Destructor.

#### `public void `[`makeMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1aaf93f21ccd15fd93894af24ba74463fa)`(const float & mass,const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & gravity,const float & friction,const float & restitution)` 

Make a material with by specifying physics constants.

#### Parameters
* `mass` Mass of the material. 

* `gravity` Gravity acting on the physics object. 

* `friction` Friction coefficient of the surfaces. 

* `restitution` Restitution coefficient for resolving collisions.

#### `public inline bool `[`isCollisionEnabled`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1a7acfbdb1c0001423f4a23fb77b7fc710)`() const` 

Returns if the material has collision enabled.

#### Returns
Whether collision has been enabled.

#### `public inline void `[`setCollision`](#class_rubeus_1_1_awerere_1_1_a_physics_material_1ad4cef6d4876687c1cf3b94c385760249)`(bool override)` 

Sets the collision parameter.

#### Parameters
* `override` New collision value.

# class `Rubeus::Awerere::APhysicsObject` 

A Physics Object that is used for all collision detection and responses.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` `[`m_PhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a22f2c15b78965bc7306d50eeea3cee48) | Physics Material defining a physics object.
`public `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * `[`m_Collider`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1acb748500cb67c70f5c51429dd6d7a9fb) | A collider in charge of handling collision algorithms.
`public bool `[`m_EnablePhysics`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a3befb2eabe3183074752a15ba914c27f) | Whether physics should be enabled for a game object.
`public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1aaf51f63d4f7d3f8a0c3f6e3b240b13ac) | The sprite linked to this physicsobject.
`public  `[`APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a32ca2ddb5fb333c0238ec9ffa75e2f49)`()` | Constructor. Applies default values.
`public  `[`APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a71c408fe1e7d2a70616cf2182fe36bdb)`(const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & material,const bool & enablePhysics,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,`[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * sprite)` | Generates a physics object for linking within a game object.
`public  `[`~APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1ad76109ec8bc4dee45053f97a4c7068a0)`()` | Destructor.

## Members

#### `public `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` `[`m_PhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a22f2c15b78965bc7306d50eeea3cee48) 

Physics Material defining a physics object.

#### `public `[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * `[`m_Collider`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1acb748500cb67c70f5c51429dd6d7a9fb) 

A collider in charge of handling collision algorithms.

#### `public bool `[`m_EnablePhysics`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a3befb2eabe3183074752a15ba914c27f) 

Whether physics should be enabled for a game object.

#### `public `[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * `[`m_Sprite`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1aaf51f63d4f7d3f8a0c3f6e3b240b13ac) 

The sprite linked to this physicsobject.

#### `public  `[`APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a32ca2ddb5fb333c0238ec9ffa75e2f49)`()` 

Constructor. Applies default values.

#### `public  `[`APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1a71c408fe1e7d2a70616cf2182fe36bdb)`(const `[`APhysicsMaterial`](#class_rubeus_1_1_awerere_1_1_a_physics_material)` & material,const bool & enablePhysics,const `[`EColliderType`](#awerere__collider__object_8h_1aa31f43f0fcc41516bb0aa51cb1d88a08)` & type,`[`ACollider`](#class_rubeus_1_1_awerere_1_1_a_collider)` * collider,`[`GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * sprite)` 

Generates a physics object for linking within a game object.

#### Parameters
* `material` Material to be used by the physics object. 

* `enablePhysics` Whether physics should be enabled for the game object. Default is false 

* `type` Type of collider to be used. Default is NO_COLLIDER 

* `collider` Collider object to be used. Default is NULL 

* `sprite` Sprite object associated to be used. Default is NULL

#### `public  `[`~APhysicsObject`](#class_rubeus_1_1_awerere_1_1_a_physics_object_1ad76109ec8bc4dee45053f97a4c7068a0)`()` 

Destructor.

# class `Rubeus::Awerere::APlaneCollider` 

```
class Rubeus::Awerere::APlaneCollider
  : public Rubeus::Awerere::ACollider
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1ab482ae77719f4ae57c83cedd0d26dbcb)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & normal,`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & emergencePoint)` | Contructor.
`public  `[`~APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a198b74f33024e90ac8b30c95da1285bf)`()` | Destructor.
`public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a8282df86b916c12865beb5e32c557316)`(float deltaX,float deltaY)` | Update the emergencePoint with the parameters passed in.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a1c4a6a99fa4e8d6de93bcaa806554e53)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` | Generate collision data with a plane collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a1d3c9f90a5b7427f4aaa69b75466bacb)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` | Generate collision data with a sphere collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a14341e6e945308d550528f07b389ba83)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` | Generate collision data with a box collider.
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`normalised`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1ac1296c4e987cc2e08d227acbdaaea703)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector) const` | Normalise a vector by converting it into a unit vector.
`public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getNormal`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1af6e924e8d23c077206574ce8575f786b)`() const` | Returns the normal of this plane.
`public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getEmergencePoint`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a262912a904c556debde5c6c61af7140d)`() const` | Returns a fixed point on the plane.

## Members

#### `public  `[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1ab482ae77719f4ae57c83cedd0d26dbcb)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & normal,`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & emergencePoint)` 

Contructor.

#### Parameters
* `normal` The normal vector of the 2D plane. 

* `emergencePoint` The fixed point through which the plane is defined.

#### `public  `[`~APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a198b74f33024e90ac8b30c95da1285bf)`()` 

Destructor.

#### `public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a8282df86b916c12865beb5e32c557316)`(float deltaX,float deltaY)` 

Update the emergencePoint with the parameters passed in.

#### Parameters
* `deltaX` The change in X position. 

* `deltaY` The change in Y position.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a1c4a6a99fa4e8d6de93bcaa806554e53)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` 

Generate collision data with a plane collider.

#### Parameters
* `plane` The plane collider to check collision with.

#### Returns
Collision data.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a1d3c9f90a5b7427f4aaa69b75466bacb)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & sphere)` 

Generate collision data with a sphere collider.

#### Parameters
* `sphere` The sphere collider to check collision with.

#### Returns
Collision data.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a14341e6e945308d550528f07b389ba83)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` 

Generate collision data with a box collider.

#### Parameters
* `box` The box collider to check collision with.

#### Returns
Collision data.

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`normalised`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1ac1296c4e987cc2e08d227acbdaaea703)`(const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & vector) const` 

Normalise a vector by converting it into a unit vector.

#### Parameters
* `vector` The vector to normalise.

#### Returns
The normalised vector.

#### `public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getNormal`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1af6e924e8d23c077206574ce8575f786b)`() const` 

Returns the normal of this plane.

#### Returns
The vector 3D normal.

#### `public inline `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` `[`getEmergencePoint`](#class_rubeus_1_1_awerere_1_1_a_plane_collider_1a262912a904c556debde5c6c61af7140d)`() const` 

Returns a fixed point on the plane.

#### Returns
Position vector of the emergence point.

# class `Rubeus::Awerere::ASphereCollider` 

```
class Rubeus::Awerere::ASphereCollider
  : public Rubeus::Awerere::ACollider
```  

A Sphere Collider for handling spherical collisions.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a6ab5187436fc5f90d6d8cde18583c4a8)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & center,const float radius)` | Contructor.
`public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a0eff60156adb65df970d6c432d2d44a8)`(float deltaX,float deltaY)` | Update the center with the parameters passed in.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a028018d0d7c3a9537bf9e5fa9e98e7b8)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & other)` | Generate collision data with a sphere collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a0c0c2bda9fd0ce31cbd2f25cd16a24c3)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` | Query collision status with another plane type collider.
`public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1ab6fa12004b816c083a3b9e74924d4866)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` | Generate collision data with a box collider.
`public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`getCenter`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a9c2cd6372e6abfd841f08047bbe061a3)`() const` | Returns the center of the sphere collider.
`public inline const float & `[`getRadius`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a8815925a72b1b885669b818480c6059b)`() const` | Returns the radius of the sphere collider.

## Members

#### `public  `[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a6ab5187436fc5f90d6d8cde18583c4a8)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & center,const float radius)` 

Contructor.

#### Parameters
* `center` Center of the sphere. 

* `radius` Radius of the sphere.

#### `public virtual void `[`selfUpdate`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a0eff60156adb65df970d6c432d2d44a8)`(float deltaX,float deltaY)` 

Update the center with the parameters passed in.

#### Parameters
* `deltaX` The change in X position. 

* `deltaY` The change in Y position.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a028018d0d7c3a9537bf9e5fa9e98e7b8)`(`[`ASphereCollider`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider)` & other)` 

Generate collision data with a sphere collider.

#### Parameters
* `other` The other sphere collider.

#### Returns
Collision data.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a0c0c2bda9fd0ce31cbd2f25cd16a24c3)`(`[`APlaneCollider`](#class_rubeus_1_1_awerere_1_1_a_plane_collider)` & plane)` 

Query collision status with another plane type collider.

Requires a 2D plane collider (straight line)

#### Parameters
* `plane` The plane collider this collider is being queried with.

#### Returns
Collision data.

#### `public virtual `[`ACollideData`](#class_rubeus_1_1_awerere_1_1_a_collide_data)` `[`tryIntersect`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1ab6fa12004b816c083a3b9e74924d4866)`(`[`ABoxCollider`](#class_rubeus_1_1_awerere_1_1_a_box_collider)` & box)` 

Generate collision data with a box collider.

#### Parameters
* `box` The box collider.

#### Returns
Collision data.

#### `public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`getCenter`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a9c2cd6372e6abfd841f08047bbe061a3)`() const` 

Returns the center of the sphere collider.

#### Returns
Center of the sphere.

#### `public inline const float & `[`getRadius`](#class_rubeus_1_1_awerere_1_1_a_sphere_collider_1a8815925a72b1b885669b818480c6059b)`() const` 

Returns the radius of the sphere collider.

#### Returns
Radius of the sphere.

# struct `Rubeus::Awerere::CollisionGrid` 

Grid of cells arranged in a 2D matrix fashion.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public const float `[`m_GridHeight`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1abbec19ab9c5b816307686e574a34131d) | Height of grid.
`public const float `[`m_GridWidth`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a1bac782a3ab188917ae4ce8cdaa6eab8) | Height of grid.
`public const float `[`m_CellHeight`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a76bd8c836316edc681f93f3455a5518f) | Height of cell.
`public const float `[`m_CellWidth`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1ac1e69f11436fdcfaa795c38d2e752ce7) | Width of cell.
`public const float `[`m_XCount`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a454f84c3f50426db1625317827fa2d68) | Count of columns.
`public const float `[`m_YCount`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a532328bcbd5cbf510cf793798c0ced17) | Count of rows.
`public  `[`CollisionGrid`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a56458f64c66009d73c2a729a64cc1e7c)`(const float & gridHeight,const float & gridWidth,const float & cellHeight,const float & cellWidth)` | Constructor.
`public  `[`~CollisionGrid`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a661a8700f7267e82e7f91b556553acba)`()` | Destructor.

## Members

#### `public const float `[`m_GridHeight`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1abbec19ab9c5b816307686e574a34131d) 

Height of grid.

#### `public const float `[`m_GridWidth`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a1bac782a3ab188917ae4ce8cdaa6eab8) 

Height of grid.

#### `public const float `[`m_CellHeight`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a76bd8c836316edc681f93f3455a5518f) 

Height of cell.

#### `public const float `[`m_CellWidth`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1ac1e69f11436fdcfaa795c38d2e752ce7) 

Width of cell.

#### `public const float `[`m_XCount`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a454f84c3f50426db1625317827fa2d68) 

Count of columns.

#### `public const float `[`m_YCount`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a532328bcbd5cbf510cf793798c0ced17) 

Count of rows.

#### `public  `[`CollisionGrid`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a56458f64c66009d73c2a729a64cc1e7c)`(const float & gridHeight,const float & gridWidth,const float & cellHeight,const float & cellWidth)` 

Constructor.

#### Parameters
* `gridHeight` Height of grid. 

* `gridWidth` Width of grid. 

* `cellHeight` Height of cell. 

* `cellWidth` Width of cell.

#### `public  `[`~CollisionGrid`](#struct_rubeus_1_1_awerere_1_1_collision_grid_1a661a8700f7267e82e7f91b556553acba)`()` 

Destructor.

# namespace `Rubeus::GraphicComponents` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)            | Values that represent window parameters. Use while constructing a [RWindowComponent](#class_rubeus_1_1_graphic_components_1_1_r_window_component) object.
`public void `[`getGLFWErrorLog`](#window__component_8h_1ae977f0dca420926193fd5c7cd465baf0)`(int error,const char * description)`            | Gets GLFW error logs.
`class `[`Rubeus::GraphicComponents::RBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_buffer) | A buffer class that handles generating and binding OpenGL buffers.
`class `[`Rubeus::GraphicComponents::RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group) | 
`class `[`Rubeus::GraphicComponents::RGuerrillaRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_guerrilla_renderer_component) | A guerrilla renderer component. Made for increased performance. Default renderer. Use instead of simple renderer.
`class `[`Rubeus::GraphicComponents::RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer) | A buffer class that handles generating and binding OpenGL index buffers.
`class `[`Rubeus::GraphicComponents::RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer) | A layer class. Manages layer renders and groups.
`class `[`Rubeus::GraphicComponents::RLayerComposition`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition) | A wrapper around UI and Scene layers of the screen.
`class `[`Rubeus::GraphicComponents::RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object) | A renderable object. Allows specifying the position, size and color of the renderable object.
`class `[`Rubeus::GraphicComponents::RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component) | A renderer component abstraction.
`class `[`Rubeus::GraphicComponents::RSceneLayer`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer) | Rendering Layer used for drawing the game scene (non-UI) to the screen.
`class `[`Rubeus::GraphicComponents::RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component) | 
`class `[`Rubeus::GraphicComponents::RSimpleRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_simple_renderer_component) | A simple renderer. Only for testing purposes.
`class `[`Rubeus::GraphicComponents::RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite) | A sprite compatible with guerrilla renderer.
`class `[`Rubeus::GraphicComponents::RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite) | A static positioned sprite.
`class `[`Rubeus::GraphicComponents::RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture) | A texture class containing all OpenGL abstractions for implementing textures.
`class `[`Rubeus::GraphicComponents::RUILayer`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer) | Rendering Layer used for drawing UI elements to the screen.
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
  : public Rubeus::RGameObject
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` * > `[`m_Children`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a23f89a55286b90c3016de2bb7fc0f831) | Vector array of child objects.
`public  `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a34b62e8d249e2fd552c3a4333072d593)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & transform)` | Constructor.
`public  `[`~RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a65a59f0752a6b2633a1beee72944cc18)`()` | Destructor.
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_group_1afba570254211098554f5975619c28ec8)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` | Submit the group to a renderer queue.
`public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a8ef556af5d9777d31a735a6e5e1a7a2f)`(`[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * renderable)` | Adds a renderable object as the children of this object.
`public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a2cc64ea43fbc98a3719cda1d53da447f)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject)` | Adds a game object as the children of this object.

## Members

#### `public std::vector< `[`RGameObject`](#class_rubeus_1_1_r_game_object)` * > `[`m_Children`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a23f89a55286b90c3016de2bb7fc0f831) 

Vector array of child objects.

#### `public  `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a34b62e8d249e2fd552c3a4333072d593)`(const `[`RML::Matrix4`](#struct_r_m_l_1_1_matrix4)` & transform)` 

Constructor.

#### Parameters
* `tranform` The tranformation matrix that displaces the childs of this group.

#### `public  `[`~RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a65a59f0752a6b2633a1beee72944cc18)`()` 

Destructor.

#### `public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_group_1afba570254211098554f5975619c28ec8)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` 

Submit the group to a renderer queue.

#### Parameters
* `renderer` The renderer to send the group contents to.

#### `public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a8ef556af5d9777d31a735a6e5e1a7a2f)`(`[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite)` * renderable)` 

Adds a renderable object as the children of this object.

Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.

#### Parameters
* `renderable` The renderable object.

#### Returns
Reference to this group object. Allows chaining [add()](#class_rubeus_1_1_graphic_components_1_1_r_group_1a8ef556af5d9777d31a735a6e5e1a7a2f) calls. E.g. group.add(r1).add(r2);

#### `public `[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_group_1a2cc64ea43fbc98a3719cda1d53da447f)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject)` 

Adds a game object as the children of this object.

Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.

#### Parameters
* `gameObject` The game object to be added to this group.

#### Returns
Reference to this group object. Allows chaining [add()](#class_rubeus_1_1_graphic_components_1_1_r_group_1a8ef556af5d9777d31a735a6e5e1a7a2f) calls. E.g. group.add(r1).add(r2);

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

# class `Rubeus::GraphicComponents::RLayerComposition` 

A wrapper around UI and Scene layers of the screen.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RLayerComposition`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a47b73a7af6d7068a536af4dfabda865d)`(const char * pathToUIVertexShader,const char * pathToUIFragmentShader,const char * pathToSceneVertexShader,const char * pathToSceneFragmentShader)` | Constructor.
`public  `[`~RLayerComposition`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a7d04a3e725ddf80fee09d416c46a56d3)`()` | Destructor.
`public void `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a834eb1dac5c4ec6a8eca003b00557002)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject,bool UIElement)` | Add a gameobject to the layers.
`public void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a5019759c35e5ce22be9357b64c6e1e89)`()` | Draw all layers to screen.

## Members

#### `public  `[`RLayerComposition`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a47b73a7af6d7068a536af4dfabda865d)`(const char * pathToUIVertexShader,const char * pathToUIFragmentShader,const char * pathToSceneVertexShader,const char * pathToSceneFragmentShader)` 

Constructor.

#### Parameters
* `pathtoUIVertexShader` Path to vertex shader for the UI layer. 

* `pathtoUIFragmentShader` Path to fragment shader for the UI layer. 

* `pathtoSceneUIShader` Path to vertex shader for the Scene layer. 

* `pathtoSceneFragmentShader` Path to fragment shader for the Scene layer.

#### `public  `[`~RLayerComposition`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a7d04a3e725ddf80fee09d416c46a56d3)`()` 

Destructor.

#### `public void `[`add`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a834eb1dac5c4ec6a8eca003b00557002)`(`[`RGameObject`](#class_rubeus_1_1_r_game_object)` * gameObject,bool UIElement)` 

Add a gameobject to the layers.

Select a layer with the second parameter

#### Parameters
* `gameObject` Pointer to the game object. 

* `UIElement` Whether the game object is a part of the UI.

#### `public void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_layer_composition_1a5019759c35e5ce22be9357b64c6e1e89)`()` 

Draw all layers to screen.

# class `Rubeus::GraphicComponents::RRenderableObject` 

A renderable object. Allows specifying the position, size and color of the renderable object.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public unsigned int `[`m_ObjectID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a386b0ee3b6e0a3a673be6dedf0ab0cf2) | Identifier for the object.
`public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`m_Position`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a5770c9834b02a4d8f268e70d750d67d8) | The position of the sprite.
`public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`m_Size`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1addcfcad62f68ff3167f4e2b12d91b978) | The size of the sprite.
`public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`m_Color`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1adfcd0cddfb5f5a0ab448a41be7234eac) | The color of the sprite.
`public std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > `[`m_UV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a8ce71902e92e9fe8a932782fc8b0366d) | The UV/texture coordinates of the current texture being utilised.
`public `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * `[`m_Texture`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a4b1bdda7f4751a83973aabaab6c09ea4) | The texture alloted to this object.
`public  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aca73d049bccb157e84e053b07b58cdee)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` * position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` * size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` * color)` | Constructor. Sets position, size, color of the sprite to be used for in the given shader.
`public virtual  `[`~RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a521bcff95a9ddd4dfd63e9d059dea3e5)`()` | Destructor.
`public virtual void `[`submit`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a54805529c6a3b5473918f7e46b20eddd)`(`[`RRendererComponent`](#class_rubeus_1_1_graphic_components_1_1_r_renderer_component)` & renderer) const` | Submit this object to a render queue.
`public inline const `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`getPosition`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a89dc97d0d5037e1602bec587a3aba786)`() const` | Gets the position.
`public inline const `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`getSize`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aee29b6de589c14179b43bd0dcb517765)`() const` | Gets the size.
`public inline const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`getColor`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a27b261ef20f2e511e717d8f0d2518848)`() const` | Gets the color.
`public inline const std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > & `[`getUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a67c746390cad14ed636bc695da4fd0b4)`() const` | Returns the UV coords of the vertices.
`public inline const GLuint `[`getTextureID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aecc1218deec48c318f3f440d5958f662)`() const` | Returns the texture ID of the respective texture assigned.
`protected  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a14ec9d1379d83088f798abd14af739a0)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` color)` | Constructor.
`protected inline void `[`setUV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1af37b1e80d9c832c6c8e7ccc7337a90f8)`()` | Sets the default values for UV coords.

## Members

#### `public unsigned int `[`m_ObjectID`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a386b0ee3b6e0a3a673be6dedf0ab0cf2) 

Identifier for the object.

#### `public `[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` & `[`m_Position`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a5770c9834b02a4d8f268e70d750d67d8) 

The position of the sprite.

#### `public `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` & `[`m_Size`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1addcfcad62f68ff3167f4e2b12d91b978) 

The size of the sprite.

#### `public `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & `[`m_Color`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1adfcd0cddfb5f5a0ab448a41be7234eac) 

The color of the sprite.

#### `public std::vector< `[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` > `[`m_UV`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a8ce71902e92e9fe8a932782fc8b0366d) 

The UV/texture coordinates of the current texture being utilised.

#### `public `[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * `[`m_Texture`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a4b1bdda7f4751a83973aabaab6c09ea4) 

The texture alloted to this object.

#### `public  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1aca73d049bccb157e84e053b07b58cdee)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` * position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` * size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` * color)` 

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

#### `protected  `[`RRenderableObject`](#class_rubeus_1_1_graphic_components_1_1_r_renderable_object_1a14ec9d1379d83088f798abd14af739a0)`(`[`RML::Vector3D`](#struct_r_m_l_1_1_vector3_d)` position,`[`RML::Vector2D`](#struct_r_m_l_1_1_vector2_d)` size,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` color)` 

Constructor.

To be called only by child classes

#### Parameters
* `position` The default position 

* `size` The default size 

* `color` The default color

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

# class `Rubeus::GraphicComponents::RSceneLayer` 

```
class Rubeus::GraphicComponents::RSceneLayer
  : public Rubeus::GraphicComponents::RLayer
```  

Rendering Layer used for drawing the game scene (non-UI) to the screen.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RSceneLayer`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1a53444858ee8daf82046cd5038cf26b29)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` | Constructor. Initialises the layer's shader.
`public virtual  `[`~RSceneLayer`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1af850e6a374a25156be7d10c9797a7b1e)`()` | 
`public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1a427f6377ce52bd5fd30f8b71fe228126)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` | Adds the group object to this layer.
`public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1aa4824826a3597540690fb67ba6f53d78)`()` | Draws the layer.

## Members

#### `public  `[`RSceneLayer`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1a53444858ee8daf82046cd5038cf26b29)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` 

Constructor. Initialises the layer's shader.

Do not pass in dereferenced pointers

#### Parameters
* `shader` The shader to be alloted to this layer.

#### `public virtual  `[`~RSceneLayer`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1af850e6a374a25156be7d10c9797a7b1e)`()` 

#### `public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1a427f6377ce52bd5fd30f8b71fe228126)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` 

Adds the group object to this layer.

#### Parameters
* `group` The group object to add.

#### Returns
Reference to this layer. Allows chaining multiple group additions. E.g.: layer.addGoup(g1).addGroup(g2);

#### `public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_scene_layer_1aa4824826a3597540690fb67ba6f53d78)`()` 

Draws the layer.

Call only once per frame

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
`public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1afb1534f02b9a01f252328002cbf1e451)`(float & x,float & y,float & width,float & height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color)` | Constructor.
`public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a154251c067bfa974858af80cb85276ae)`(float & x,float & y,float & width,float & height,`[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * texture)` | Constructor.

## Members

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1ae57b9bca6412edb0bd106b6ec13d9130)`()` 

Constructor.

#### `public virtual  `[`~RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a129dfb88b174cc3506bd6cccf6871732)`()` 

Destructor.

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1afb1534f02b9a01f252328002cbf1e451)`(float & x,float & y,float & width,float & height,const `[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color)` 

Constructor.

#### Parameters
* `x` The x offset. 

* `y` The y offset. 

* `width` The width. 

* `height` The height. 

* `color` The color of this sprite.

#### `public  `[`RSprite`](#class_rubeus_1_1_graphic_components_1_1_r_sprite_1a154251c067bfa974858af80cb85276ae)`(float & x,float & y,float & width,float & height,`[`RTexture`](#class_rubeus_1_1_graphic_components_1_1_r_texture)` * texture)` 

Constructor.

#### Parameters
* `x` The x offset. 

* `y` The y offset. 

* `width` The width. 

* `height` The height. 

* `texture` Pointer to the texture to be used.

# class `Rubeus::GraphicComponents::RStaticSprite` 

```
class Rubeus::GraphicComponents::RStaticSprite
  : public Rubeus::GraphicComponents::RRenderableObject
```  

A static positioned sprite.

Use only while testing the simple renderer.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1ae5795e8b2b913debf47f6d55b943b323)`(float x,float y,float width,float height,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color,`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` | Constructor.
`public  `[`~RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a1b7057b7240d5305622b5720fcffbc2b)`()` | Destructor.
`public inline `[`RVertexArray`](#class_rubeus_1_1_graphic_components_1_1_r_vertex_array)` * `[`getVAO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af8a709a0f9ba76b17a3344ab10f92725)`() const` | Gets the vao.
`public inline `[`RIndexBuffer`](#class_rubeus_1_1_graphic_components_1_1_r_index_buffer)` * `[`getIBO`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1a333623bfa0a8b395171eee04a0698290)`() const` | Gets the ibo.
`public inline `[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & `[`getShader`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1af134c2b842063a38ae9b8d3b13a74947)`() const` | Gets the shader.

## Members

#### `public  `[`RStaticSprite`](#class_rubeus_1_1_graphic_components_1_1_r_static_sprite_1ae5795e8b2b913debf47f6d55b943b323)`(float x,float y,float width,float height,`[`RML::Vector4D`](#struct_r_m_l_1_1_vector4_d)` & color,`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` 

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

# class `Rubeus::GraphicComponents::RUILayer` 

```
class Rubeus::GraphicComponents::RUILayer
  : public Rubeus::GraphicComponents::RLayer
```  

Rendering Layer used for drawing UI elements to the screen.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`RUILayer`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a8ba4c16b1448cf3545dd0f05e663a319)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` | Constructor. Initialises the layer's shader.
`public virtual  `[`~RUILayer`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a55a4910be12d1334841de75e96077393)`()` | Destructor.
`public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1aba951fa894f61bba07fb8a0936f84926)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` | Adds the group object to this layer.
`public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a4f5faf43773b85b191239d330e099635)`()` | Draws the layer.

## Members

#### `public  `[`RUILayer`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a8ba4c16b1448cf3545dd0f05e663a319)`(`[`RShaderComponent`](#class_rubeus_1_1_graphic_components_1_1_r_shader_component)` & shader)` 

Constructor. Initialises the layer's shader.

Do not pass in dereferenced pointers

#### Parameters
* `shader` The shader to be alloted to this layer.

#### `public virtual  `[`~RUILayer`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a55a4910be12d1334841de75e96077393)`()` 

Destructor.

#### `public virtual `[`RLayer`](#class_rubeus_1_1_graphic_components_1_1_r_layer)` & `[`addGroup`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1aba951fa894f61bba07fb8a0936f84926)`(`[`RGroup`](#class_rubeus_1_1_graphic_components_1_1_r_group)` & group)` 

Adds the group object to this layer.

#### Parameters
* `group` The group object to add.

#### Returns
Reference to this layer. Allows chaining multiple group additions. E.g.: layer.addGoup(g1).addGroup(g2);

#### `public virtual void `[`draw`](#class_rubeus_1_1_graphic_components_1_1_r_u_i_layer_1a4f5faf43773b85b191239d330e099635)`()` 

Draws the layer.

Call only once per frame

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
`public GLFWwindow * `[`m_Window`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1af445e2e41ff6c10dbcffbb8ffa7959dd) | GLFW Window object.
`public bool `[`initWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a7de46dcdb635adfd4324e7ca5da1b3f0)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType)` | Initializes the Rubeus game window. Use enum EWindowParameters for windowMode and windowType.
`public  `[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac61828b6b57dfb3aa398fd0cd5f34224)`(const char * title,int width,int height,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowMode,`[`EWindowParameters`](#window__component_8h_1ab1b8341969a82bc64ecc95a440578f4e)` windowType,int setFPS)` | Constructor. Use enum EWindowParameters for windowMode and windowType.
`public  `[`~RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab56619ea64ad8ebec5f0059a7a5c6638)`()` | Destructor.
`public void `[`clearWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ab7c5724af3c2d6f3c3db226eb0757263)`()` | Clears the window with a color buffer.
`public void `[`updateWindow`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1af65024825d2b929e9e322570f48aad81)`()` | Updates the window Polls GLFW for any changes Then swaps the buffers.
`public bool `[`closed`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a47a71ace6fce39d9e9213c914b9be2f3)`()` | Queries if the window is closed.
`public void `[`setWindowTitle`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a279b5589ab679da9f44d34a47bcc3966)`(const char * title)` | Sets window title.
`public void `[`setWindowIcon`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1ac79eb96ca24e529ab82411e58c81ccdc)`(`[`RWindowComponent`](#class_rubeus_1_1_graphic_components_1_1_r_window_component)` GameWindow,std::string names)` | 
`public void `[`setWindowIconToDefault`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a002c157c066b4f5040cf140a593850a6)`()` | 
`public inline const int & `[`getWidth`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a789cf8e623651ca942d89c952d43ee22)`() const` | Gets the width of this window.
`public inline const int & `[`getHeight`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a5dde4e474f3c987392f5153da10e3610)`() const` | Gets the height of this window.
`public virtual void `[`onMessage`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a55b12b3208217709e571d6e7811de756)`(`[`Message`](#struct_rubeus_1_1_message)` * msg)` | Handles the message received.

## Members

#### `public GLFWwindow * `[`m_Window`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1af445e2e41ff6c10dbcffbb8ffa7959dd) 

GLFW Window object.

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

#### `public inline const int & `[`getWidth`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a789cf8e623651ca942d89c952d43ee22)`() const` 

Gets the width of this window.

#### Returns
Width of this window.

#### `public inline const int & `[`getHeight`](#class_rubeus_1_1_graphic_components_1_1_r_window_component_1a5dde4e474f3c987392f5153da10e3610)`() const` 

Gets the height of this window.

#### Returns
Height of this window.

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

# class `APLaneCollider` 

A 2D plane collider, equivalent to a straight line on a 2D screen.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

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

/* ==== FUN_004c04b0 @ 004c04b0 ==== 
 * signature: undefined4 __cdecl FUN_004c04b0(int param_1, uint param_2, uint param_3, uint param_4)
 * body: 004c04b0-004c050a;004c050e-004c060b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c050b-004c050d
 */

undefined4 __cdecl FUN_004c04b0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c3fa0((byte *)s_init_3d_library__version__d_005b29ac);
  FUN_004bc4e0(param_4);
  FUN_004c0460();
  FUN_004c3fa0((byte *)s_init_z_buffer_005b299c);
  iVar1 = FUN_004c0610(param_1,0x10,DAT_005b3798,DAT_005b379c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3D___Error_creating_Z__005b2970);
  }
  FUN_004c3fa0((byte *)s_z_buffer_initialized____d_005b2954);
  FUN_004c3fa0((byte *)s_init_d3d_device_005b2940);
  if (DAT_0073b780 == 0) {
    FUN_004bb560(param_1);
  }
  else {
    FUN_004bb570(param_1,3);
  }
  FUN_004c3fa0((byte *)s_setting_palette_005b292c);
  FUN_004c9e70(DAT_007409f0,0,0x100);
  FUN_004c3fa0((byte *)s_enum_texture_formats_005b2914);
  FUN_004c2a40();
  if (DAT_005b37a0 < 9) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  FUN_004c2b90(uVar2);
  FUN_004c3fa0((byte *)s_init_lights_005b2904);
  FUN_004c38d0(param_2);
  FUN_004c3fa0((byte *)s_init_materials_005b28f4);
  FUN_004bab70(param_3);
  FUN_004c3fa0((byte *)s_init_viewport_005b28e4);
  FUN_004c09b0(10);
  FUN_004c3fa0((byte *)s_add_a_viewport_005b28d4);
  iVar1 = FUN_004c0c30();
  FUN_004c0d30(iVar1);
  FUN_004c3fa0((byte *)s_init_viewport_ok_005b28c0);
  FUN_004c3fa0((byte *)s_clear_z_buffer_005b28b0);
  FUN_004c0780();
  FUN_004c3fa0((byte *)s_clear_z_buffer_ok_005b289c);
  return 1;
}




/* ==== FUN_004541c0 @ 004541c0 ==== 
 * signature: undefined __cdecl FUN_004541c0(int param_1)
 * body: 004541c0-00454295
 */

void __cdecl FUN_004541c0(int param_1)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s_Adding_Unmovable_physics_to_obje_005a348c);
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar1 + 0x54 + iVar1 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar1 + 0x54 + iVar1 * 0xa8) - 1.0;
  FUN_004a79d0(param_1,0,0,0,0,0,0,0.0,1.0,0.6,'\x01',0,'\0',1);
  FUN_004a7190(param_1);
  return;
}



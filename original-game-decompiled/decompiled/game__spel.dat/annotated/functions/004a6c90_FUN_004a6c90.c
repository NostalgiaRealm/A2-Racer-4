
/* ==== FUN_004a6c90 @ 004a6c90 ==== 
 * signature: undefined __cdecl FUN_004a6c90(int param_1)
 * body: 004a6c90-004a6cf7
 */

void __cdecl FUN_004a6c90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  *(undefined4 *)(iVar2 + 0x38 + DAT_00715e50) = *(undefined4 *)(iVar2 + 0x34 + DAT_00715e50);
  iVar1 = iVar2 + DAT_00715e50;
  iVar2 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
  iVar2 = FUN_004af230(&DAT_00715250,*(int *)(iVar1 + 0x38),*(float *)(iVar2 + 0x50),
                       *(undefined4 *)(iVar2 + 0x54),*(float *)(iVar2 + 0x58));
  *(int *)(iVar1 + 0x34) = iVar2;
  return;
}



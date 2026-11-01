
/* ==== FUN_00473fb0 @ 00473fb0 ==== 
 * signature: undefined __cdecl FUN_00473fb0(int * param_1, int param_2)
 * body: 00473fb0-00473ffb
 */

void __cdecl FUN_00473fb0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0073b0d0 + *(int *)(*param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  *(undefined4 *)(iVar2 + 0x80) = *puVar1;
  *(undefined4 *)(iVar2 + 0x84) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x88) = puVar1[2];
  return;
}



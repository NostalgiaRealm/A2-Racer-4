
/* ==== FUN_004afbd0 @ 004afbd0 ==== 
 * signature: undefined __cdecl FUN_004afbd0(int param_1, undefined4 * param_2)
 * body: 004afbd0-004afd19
 */

void __cdecl FUN_004afbd0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 * 0xf0;
  iVar3 = FUN_004a8c50(iVar5 + DAT_00715e50);
  iVar3 = iVar3 * 0xac;
  puVar1 = (undefined4 *)(iVar3 + 0x10 + DAT_0073b5c8);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x1c + DAT_0073b5c8);
  param_2[3] = *puVar1;
  param_2[4] = puVar1[1];
  param_2[5] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x4c + DAT_0073b5c8);
  param_2[6] = *puVar1;
  param_2[7] = puVar1[1];
  param_2[8] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x40 + DAT_0073b5c8);
  param_2[9] = *puVar1;
  param_2[10] = puVar1[1];
  param_2[0xb] = puVar1[2];
  iVar4 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
  param_2[0xc] = *(undefined4 *)(iVar4 + 0x50);
  param_2[0xd] = *(undefined4 *)(iVar4 + 0x54);
  param_2[0xe] = *(undefined4 *)(iVar4 + 0x58);
  param_2[0x11] =
       (int)ROUND(ROUND(*(float *)(DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 +
                                  0x78)));
  uVar2 = *(undefined4 *)(iVar3 + 0x74 + DAT_0073b5c8);
  param_2[0x12] = 1;
  param_2[0xf] = uVar2;
  param_2[0x10] = param_1;
  return;
}



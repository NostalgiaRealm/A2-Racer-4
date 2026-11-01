
/* ==== FUN_00463050 @ 00463050 ==== 
 * signature: undefined __cdecl FUN_00463050(int param_1)
 * body: 00463050-004630c8
 */

void __cdecl FUN_00463050(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_40 [12];
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  
  iVar1 = (&DAT_006c3518)[DAT_006c3568];
  puVar3 = &DAT_0073b538;
  puVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = DAT_00719b50 + 8 + iVar1 * 0x178;
  local_10 = *(undefined4 *)(DAT_00719b50 + 8 + iVar1 * 0x178);
  local_8 = *(undefined4 *)(iVar2 + 8);
  local_c = *(float *)(iVar2 + 4) + 20.0;
  FUN_00462b90(param_1,local_40);
  return;
}



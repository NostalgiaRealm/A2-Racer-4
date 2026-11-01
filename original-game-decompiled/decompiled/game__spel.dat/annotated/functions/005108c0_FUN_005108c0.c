
/* ==== FUN_005108c0 @ 005108c0 ==== 
 * signature: undefined __fastcall FUN_005108c0(int param_1)
 * body: 005108c0-00510977
 */

void __fastcall FUN_005108c0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 local_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x8c);
  local_10[2] = 0;
  local_10[3] = 0;
  puVar2 = (uint *)(*(uint *)(param_1 + iVar1 * -0x1c + 0x48) & 0xfffffff0);
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[3 - iVar1] = puVar2 + ((*puVar2 & 0xfff) + 1) * -4;
  puVar2 = (uint *)(*(uint *)(iVar1 * 0x1c + 0x2c + param_1) & 0xfffffff0);
  local_10[iVar1] = puVar2 + ((*puVar2 & 0xfff) + 1) * -4;
  FUN_00539b00();
  return;
}




/* ==== FUN_0045566c @ 0045566c ==== 
 * signature: undefined __register FUN_0045566c(int * param_1, int param_2, undefined4 param_3)
 * body: 0045566c-00455713
 */

void FUN_0045566c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x474) == 0) {
    FUN_004550a4(param_1,-1,param_3);
    *(char *)(param_1 + 0x10b) = (char)param_3;
  }
  else {
    FUN_00455154(param_1,*(int *)(param_2 + 0x47c),*(undefined4 *)(param_2 + 0x428),
                 *(char *)(param_2 + 0x41c),(char)param_3,(undefined4 *)(param_2 + 0x15),
                 (int *)(param_2 + 0x444),*(int *)(param_2 + 8));
    if ((char)param_1[0x107] == '\0') {
      FUN_004028d8(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x14);
      *(int *)(param_1[3] + 0x14) = iVar1;
      iVar1 = FUN_0040277c(iVar1);
      param_1[0x110] = iVar1;
      FUN_004028d8(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
  }
  return;
}




/* ==== FUN_00441874 @ 00441874 ==== 
 * signature: undefined __register FUN_00441874(int * param_1, int param_2, undefined4 * param_3, uint param_4)
 * body: 00441874-00441964
 */

void FUN_00441874(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar4;
  undefined4 local_1c [4];
  char local_a;
  char local_9;
  int *local_8;
  
  puVar4 = local_1c;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((*(int *)PTR_DAT_004ab748 < 5) &&
     ((*(int *)PTR_DAT_004ab748 != 4 || (*(int *)PTR_DAT_004ab8fc < 1)))) {
    local_a = '\0';
  }
  else {
    local_a = '\x01';
  }
  local_8 = param_1;
  piVar1 = (int *)FUN_00403178(param_1,param_2,0);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0043c1f8);
  local_9 = (char)uVar2;
  if (((param_4 & 1) == 0) || ((local_9 != '\0' && ((local_9 == '\0' || (local_a != '\0')))))) {
    if ((local_a == '\0') || ((param_4 & 0x80) == 0)) {
      TBrush_set_Color(*(int **)(param_2 + 0x14),0x80000004);
      TFont_set_Color(*(int **)(param_2 + 0xc),-0x7ffffff9,extraout_ECX_01);
    }
    else {
      TBrush_set_Color(*(int **)(param_2 + 0x14),0x80000004);
      TFont_set_Color(*(int **)(param_2 + 0xc),-0x7fffffef,extraout_ECX_00);
    }
  }
  else {
    TBrush_set_Color(*(int **)(param_2 + 0x14),0x8000000d);
    TFont_set_Color(*(int **)(param_2 + 0xc),-0x7ffffff2,extraout_ECX);
  }
  (**(code **)(*local_8 + 0x30))(local_8,param_2,local_1c,local_9,param_4);
  return;
}



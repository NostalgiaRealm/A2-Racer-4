
/* ==== FUN_004550a4 @ 004550a4 ==== 
 * signature: int * __register FUN_004550a4(int * param_1, char param_2, undefined4 param_3)
 * body: 004550a4-00455152
 */

int * FUN_004550a4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 in_stack_fffffbb0;
  undefined4 in_stack_fffffbb4;
  int local_434 [12];
  undefined4 local_404 [256];
  
  bVar7 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffbb0,in_stack_fffffbb4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x10b) = 1;
  FUN_00454c3c((undefined1 *)local_404);
  FUN_00455f14((int)param_1,local_404);
  FUN_00454c3c((undefined1 *)local_404);
  puVar3 = local_404;
  puVar5 = (undefined4 *)((int)param_1 + 0x15);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_00454b40(8,8,8,local_434);
  piVar4 = local_434;
  piVar6 = param_1 + 0x111;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_fffffbb0;
  }
  return param_1;
}



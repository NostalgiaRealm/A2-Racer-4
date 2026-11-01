
/* ==== FUN_004d5520 @ 004d5520 ==== 
 * signature: undefined __stdcall FUN_004d5520(undefined4 * param_1, facet * param_2, int * param_3, void * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * body: 004d5520-004d5608
 */

void FUN_004d5520(undefined4 *param_1,facet *param_2,int *param_3,void *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte *pbVar2;
  size_t sVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte local_54 [8];
  byte local_4c [76];
  
  iVar6 = *(int *)((int)param_4 + 0x10);
  if ((iVar6 < 1) && ((*(uint *)((int)param_4 + 0xc) & 0x2000) == 0)) {
    iVar6 = 6;
  }
  iVar7 = 0x24;
  if (iVar6 < 0x25) {
    iVar7 = iVar6;
  }
  uVar1 = *(uint *)((int)param_4 + 0xc);
  local_54[0] = 0x25;
  pbVar2 = local_54 + 1;
  if ((uVar1 & 0x20) != 0) {
    local_54[1] = 0x2b;
    pbVar2 = local_54 + 2;
  }
  if ((uVar1 & 0x10) != 0) {
    *pbVar2 = 0x23;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = 0x2e;
  pbVar2[1] = 0x2a;
  pbVar2[2] = 0x4c;
  if ((uVar1 & 0x3000) == 0x2000) {
    bVar5 = 0x66;
  }
  else {
    bVar5 = (((uVar1 & 0x3000) != 0x1000) - 1U & 0xfe) + 0x67;
  }
  pbVar2[3] = bVar5;
  pbVar2[4] = 0;
  sVar3 = FUN_005587a3(local_4c,local_54);
  puVar4 = (undefined4 *)
           FUN_004d57d0(&param_6,param_2,param_3,param_4,param_5,local_4c,iVar6 - iVar7,sVar3);
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  return;
}



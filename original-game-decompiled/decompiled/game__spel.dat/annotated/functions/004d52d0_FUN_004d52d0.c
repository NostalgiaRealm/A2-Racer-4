
/* ==== FUN_004d52d0 @ 004d52d0 ==== 
 * signature: undefined __stdcall FUN_004d52d0(int * param_1, int param_2, void * param_3, void * param_4, undefined4 param_5)
 * body: 004d52d0-004d5343
 */

void FUN_004d52d0(int *param_1,int param_2,void *param_3,void *param_4,undefined4 param_5)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte local_50 [8];
  int aiStack_48 [2];
  byte local_40 [64];
  
  local_50[0] = 0x25;
  pbVar4 = local_50 + 1;
  uVar2 = *(uint *)((int)param_4 + 0xc);
  if ((uVar2 & 0x20) != 0) {
    local_50[1] = 0x2b;
    pbVar4 = local_50 + 2;
  }
  if ((uVar2 & 8) != 0) {
    *pbVar4 = 0x23;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = 0x6c;
  if ((uVar2 & 0xe00) == 0x400) {
    bVar1 = 0x6f;
  }
  else if ((uVar2 & 0xe00) == 0x800) {
    bVar1 = (~(byte)uVar2 & 4 | 0xb) << 3;
  }
  else {
    bVar1 = 100;
  }
  pbVar4[1] = bVar1;
  pbVar4[2] = 0;
  uVar2 = FUN_005587a3(local_40,local_50);
  piVar3 = FUN_004d5bc0(aiStack_48,param_2,param_3,param_4,param_5,local_40,uVar2);
  *param_1 = *piVar3;
  param_1[1] = piVar3[1];
  return;
}



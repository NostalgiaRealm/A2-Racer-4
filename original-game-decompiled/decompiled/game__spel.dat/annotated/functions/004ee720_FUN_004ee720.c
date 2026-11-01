
/* ==== FUN_004ee720 @ 004ee720 ==== 
 * signature: undefined __fastcall FUN_004ee720(int param_1)
 * body: 004ee720-004ee7e5
 */

void __fastcall FUN_004ee720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x120);
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x124);
  iVar4 = *(int *)(param_1 + 0x128);
  *(float *)(param_1 + 0xfc) =
       (float)*(int *)(param_1 + 0xf0) /
       (float)((*(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x114)) / 2);
  FUN_004ee6d0((float *)(param_1 + 0xfc),-1.0,1.0);
  *(float *)(param_1 + 0x100) = (float)-*(int *)(param_1 + 0xf4) / (float)((iVar1 - iVar2) / 2);
  FUN_004ee6d0((float *)(param_1 + 0x100),-1.0,1.0);
  *(float *)(param_1 + 0x104) = (float)*(int *)(param_1 + 0xf8) / (float)((iVar4 - iVar3) / 2);
  FUN_004ee6d0((float *)(param_1 + 0x104),-1.0,1.0);
  return;
}




/* ==== FUN_004b9ab0 @ 004b9ab0 ==== 
 * signature: undefined __cdecl FUN_004b9ab0(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 004b9ab0-004b9b37
 */

void __cdecl FUN_004b9ab0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10 [2];
  int local_8;
  
  iVar1 = FUN_004b9800(param_2,param_3,param_4);
  if ((DAT_0073b4f8 != '\0') && (iVar1 != 0)) {
    iVar1 = iVar1 + 1;
    puVar2 = (undefined4 *)FUN_004c2a50();
    uVar3 = FUN_004c4c30(param_4,param_4,0x4005000,puVar2,iVar1);
    *param_1 = uVar3;
    return;
  }
  FUN_004b9840(param_2,param_3,param_4,local_10);
  puVar2 = (undefined4 *)FUN_004c2a50();
  uVar4 = FUN_004c4b90(local_8 - local_10[0],local_8 - local_10[0],0x4005000,puVar2);
  *param_1 = uVar4;
  return;
}



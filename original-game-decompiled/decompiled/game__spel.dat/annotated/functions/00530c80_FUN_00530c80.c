
/* ==== FUN_00530c80 @ 00530c80 ==== 
 * signature: undefined __cdecl FUN_00530c80(int * param_1, int param_2, int param_3)
 * body: 00530c80-00530df9
 */

void __cdecl FUN_00530c80(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 1;
  if (param_3 != 0) {
    FUN_00558953(param_1,&DAT_005c3918);
  }
  local_14 = (int *)FUN_005182e0(param_2);
  iVar2 = FUN_00514af0(local_14);
  local_1c = FUN_00514b50(iVar2);
  if (local_14 != (int *)0x0) {
    piVar4 = local_14 + 1;
    iVar2 = local_14[1];
    while (iVar2 != 0) {
      piVar4 = piVar4 + 1;
      DAT_0074c968 = DAT_0074c968 + 1;
      FUN_005273a0(*(double **)(iVar2 + 8),param_2,(double *)&local_10);
      iVar2 = FUN_005288f0(*(double **)(iVar2 + 8),param_2,(double)CONCAT44(local_c,local_10));
      FUN_00514020(&local_1c,iVar2);
      iVar2 = *piVar4;
    }
  }
  FUN_00558953(param_1,(byte *)s_Polygon___005c390c);
  if (local_1c != 0) {
    piVar4 = (int *)(local_1c + 4);
    iVar2 = *(int *)(local_1c + 4);
    while (iVar2 != 0) {
      piVar4 = piVar4 + 1;
      if (local_18 == 0) {
        FUN_00558953(param_1,&DAT_005c3918);
      }
      else {
        local_18 = 0;
      }
      FUN_00558953(param_1,(byte *)s___16_8f___16_8f___16_8f__005c38f0);
      iVar2 = *piVar4;
    }
    if (local_1c != 0) {
      puVar3 = (undefined4 *)(local_1c + 4);
      puVar1 = *(undefined4 **)(local_1c + 4);
      while (puVar1 != (undefined4 *)0x0) {
        puVar3 = puVar3 + 1;
        FUN_0051e2b0(puVar1,DAT_0074c5f4);
        puVar1 = (undefined4 *)*puVar3;
      }
    }
  }
  FUN_00514ba0(&local_1c);
  FUN_00514ba0((int *)&local_14);
  FUN_00558953(param_1,&DAT_005c38ec);
  return;
}



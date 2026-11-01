
/* ==== FUN_005344e0 @ 005344e0 ==== 
 * signature: undefined __cdecl FUN_005344e0(int param_1, undefined4 param_2, int param_3, undefined4 * param_4)
 * body: 005344e0-005345d6
 */

void __cdecl FUN_005344e0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 0x50) & 0x40000000) == 0) &&
     (((*(uint *)(param_1 + 0x50) & 0x20000000) == 0 || (param_3 != 6)))) {
    puVar2 = *(undefined4 **)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x60) * 4);
    puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x60) * 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = FUN_0051e110(0x18);
    }
    else {
      DAT_0074c78c = DAT_0074c78c + 1;
      *puVar1 = *(undefined4 *)*puVar1;
    }
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    puVar2[4] = param_3;
    if ((param_4 != (undefined4 *)0x0) && (DAT_0074be04 != 0)) {
      *puVar2 = *param_4;
      puVar2[1] = param_4[1];
    }
    if (param_3 < 6) {
      FUN_00514020(&DAT_0074c6e0,(int)puVar2);
      return;
    }
    if (param_3 == 6) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x20000000;
      iVar3 = FUN_005147a0(DAT_0074c6e4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 6)) {
        FUN_00513f70((int *)&DAT_0074c6e4,0,puVar2);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x40000000;
    }
    FUN_00514020((int *)&DAT_0074c6e4,(int)puVar2);
  }
  return;
}



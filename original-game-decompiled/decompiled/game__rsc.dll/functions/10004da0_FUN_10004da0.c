
/* ==== FUN_10004da0 @ 10004da0 ==== 
 * signature: undefined4 __cdecl FUN_10004da0(void * param_1, UINT_PTR param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 10004da0-10004e82
 */

undefined4 __cdecl
FUN_10004da0(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = FUN_10004d10((int)param_1);
  if (BVar1 != 0) {
    FUN_100073f0(9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1002fce4)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_10007490(9);
      return 1;
    }
    FUN_10007490(9);
  }
  return 0;
}



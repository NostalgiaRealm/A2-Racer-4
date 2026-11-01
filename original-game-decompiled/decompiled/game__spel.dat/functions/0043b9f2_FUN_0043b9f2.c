
/* ==== FUN_0043b9f2 @ 0043b9f2 ==== 
 * signature: undefined4 __cdecl FUN_0043b9f2(int * param_1)
 * body: 0043b9f2-0043ba23;0043ba27-0043bbd4
 */

undefined4 __cdecl FUN_0043b9f2(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Text_structure_not_initt_0059a2dc);
  }
  if (param_1[1] != 0) {
    if ((param_1[9] == param_1[8] + -1) && (param_1[2] == 0)) {
      FUN_004c9930((int *)param_1[3],(int *)param_1[4],0,0,param_1[5],param_1[6],
                   (byte)((DAT_005b3798 - param_1[5]) / 2));
      return 1;
    }
    uVar4 = 0;
    if (0 < param_1[6]) {
      do {
        iVar3 = DAT_005b3798;
        if ((uVar4 & 1) == 0) {
          lVar6 = __ftol();
          iVar3 = iVar3 - (int)lVar6;
        }
        else {
          iVar3 = param_1[5];
          lVar6 = __ftol();
          iVar3 = (int)lVar6 - iVar3;
        }
        iVar5 = param_1[5];
        iVar1 = iVar5 + iVar3;
        if ((0 < iVar1) && (iVar3 < DAT_005b3798)) {
          iVar2 = 0;
          if (iVar3 < 0) {
            iVar2 = -iVar3;
            iVar3 = 0;
            iVar5 = iVar1;
          }
          else if (DAT_005b3798 < iVar1) {
            iVar5 = DAT_005b3798 - iVar3;
          }
          FUN_004c9930((int *)param_1[3],(int *)param_1[4],iVar2,uVar4,iVar5 + iVar2,uVar4 + 1,
                       (byte)iVar3);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < param_1[6]);
    }
    if (param_1[2] == 0) {
      iVar3 = param_1[9];
      param_1[9] = iVar3 + 1;
      if (param_1[8] <= iVar3 + 1) {
        param_1[9] = param_1[8] + -1;
        return 1;
      }
    }
    else {
      iVar3 = param_1[9];
      param_1[9] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        param_1[9] = 0;
        return 1;
      }
    }
  }
  return 0;
}



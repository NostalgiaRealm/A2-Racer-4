
/* ==== FUN_0055b179 @ 0055b179 ==== 
 * signature: int * __cdecl FUN_0055b179(int * param_1)
 * body: 0055b179-0055b2d8
 */

int * __cdecl FUN_0055b179(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  
  piVar2 = param_1;
  if (*param_1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00563515();
    iVar3 = *piVar2;
    if ((iVar3 < 0x3f481) || (0x7ffc0b7e < iVar3)) {
      piVar2 = (int *)FUN_00563a74(piVar2);
      bVar1 = FUN_00563788(piVar2);
      iVar3 = *piVar2;
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        iVar3 = iVar3 - DAT_005c8c60;
      }
      param_1 = (int *)(iVar3 - DAT_005c8c58);
      iVar3 = (int)param_1 % 0x3c;
      *piVar2 = iVar3;
      if (iVar3 < 0) {
        *piVar2 = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[1]);
      iVar3 = (int)param_1 % 0x3c;
      piVar2[1] = iVar3;
      if (iVar3 < 0) {
        piVar2[1] = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[2]);
      iVar3 = (int)param_1 % 0x18;
      piVar2[2] = iVar3;
      if (iVar3 < 0) {
        piVar2[2] = iVar3 + 0x18;
        param_1 = param_1 + -6;
      }
      iVar3 = (int)param_1 / 0x18;
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          return piVar2;
        }
        piVar2[6] = (piVar2[6] + 7 + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
        if (piVar2[3] < 1) {
          piVar2[5] = piVar2[5] + -1;
          piVar2[3] = piVar2[3] + 0x1f;
          piVar2[7] = 0x16c;
          piVar2[4] = 0xb;
          return piVar2;
        }
      }
      else {
        piVar2[6] = (piVar2[6] + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
      }
      piVar2[7] = piVar2[7] + iVar3;
    }
    else {
      param_1 = (int *)(iVar3 - DAT_005c8c58);
      piVar2 = (int *)FUN_00563a74((int *)&param_1);
      if ((DAT_005c8c5c != 0) && (bVar1 = FUN_00563788(piVar2), CONCAT31(extraout_var,bVar1) != 0))
      {
        param_1 = (int *)((int)param_1 - DAT_005c8c60);
        piVar2 = (int *)FUN_00563a74((int *)&param_1);
        piVar2[8] = 1;
      }
    }
  }
  return piVar2;
}



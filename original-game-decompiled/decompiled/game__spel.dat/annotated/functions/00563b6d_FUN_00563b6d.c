
/* ==== FUN_00563b6d @ 00563b6d ==== 
 * signature: uint __cdecl FUN_00563b6d(uint param_1, int * param_2)
 * body: 00563b6d-00563c90
 */

uint __cdecl FUN_00563b6d(uint param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_00563c83:
    param_2[3] = uVar6 | 0x20;
  }
  else {
    if ((uVar6 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar6 & 0x10) == 0) goto LAB_00563c83;
      *param_2 = param_2[2];
      param_2[3] = uVar6 & 0xfffffffe;
    }
    uVar6 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar3[3] = uVar6 & 0xffffffef | 2;
    if (((uVar6 & 0x10c) == 0) &&
       (((piVar3 != &DAT_005c7bf8 && (piVar3 != (int *)&DAT_005c7c18)) ||
        (bVar4 = FUN_00565e5a(uVar1), CONCAT31(extraout_var,bVar4) == 0)))) {
      FUN_00562e5d(piVar3);
    }
    uVar6 = param_1;
    if ((*(ushort *)(piVar3 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x2;
      param_2 = (int *)FUN_0055fe30(uVar1,(char *)&param_1,2);
    }
    else {
      pcVar2 = (char *)piVar3[2];
      piVar7 = (int *)(*piVar3 - (int)pcVar2);
      *piVar3 = (int)(pcVar2 + 2);
      piVar3[1] = piVar3[6] + -2;
      if ((int)piVar7 < 1) {
        if (uVar1 == 0xffffffff) {
          puVar5 = &DAT_005c8ac8;
        }
        else {
          puVar5 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
        }
        if ((puVar5[4] & 0x20) != 0) {
          FUN_00562b76(uVar1,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_0055fe30(uVar1,pcVar2,(uint)piVar7);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    if (param_2 == piVar7) {
      return uVar6 & 0xffff;
    }
    piVar3[3] = piVar3[3] | 0x20;
  }
  return 0xffff;
}



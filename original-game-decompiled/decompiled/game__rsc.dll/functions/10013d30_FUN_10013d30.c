
/* ==== FUN_10013d30 @ 10013d30 ==== 
 * signature: undefined4 __cdecl FUN_10013d30(int * param_1)
 * body: 10013d30-10014029
 */

undefined4 __cdecl FUN_10013d30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10030da4 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10030e38) || (param_1[5] != DAT_10030e48)) {
    if (DAT_100316d8 == 0) {
      FUN_10014030(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10014030(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10031778 == 0) {
        FUN_10014030(1,1,param_1[5],(uint)DAT_1003177a,(uint)DAT_1003177e,(uint)DAT_1003177c,0,
                     (uint)DAT_10031780,(uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      else {
        FUN_10014030(1,0,param_1[5],(uint)DAT_1003177a,0,0,(uint)DAT_1003177e,(uint)DAT_10031780,
                     (uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      if (DAT_10031724 == 0) {
        FUN_10014030(0,1,param_1[5],(uint)DAT_10031726,(uint)DAT_1003172a,(uint)DAT_10031728,0,
                     (uint)DAT_1003172c,(uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
      else {
        FUN_10014030(0,0,param_1[5],(uint)DAT_10031726,0,0,(uint)DAT_1003172a,(uint)DAT_1003172c,
                     (uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
    }
  }
  if (DAT_10030e3c < DAT_10030e4c) {
    if ((param_1[7] < DAT_10030e3c) || (DAT_10030e4c < param_1[7])) {
      return 0;
    }
    if ((DAT_10030e3c < param_1[7]) && (param_1[7] < DAT_10030e4c)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10030e4c) || (DAT_10030e3c < param_1[7])) {
      return 1;
    }
    if ((DAT_10030e4c < param_1[7]) && (param_1[7] < DAT_10030e3c)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10030e3c) {
    if (iVar2 < DAT_10030e40) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10030e50) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



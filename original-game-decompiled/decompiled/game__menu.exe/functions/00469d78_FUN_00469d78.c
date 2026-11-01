
/* ==== FUN_00469d78 @ 00469d78 ==== 
 * signature: undefined __register FUN_00469d78(int * param_1, int param_2)
 * body: 00469d78-00469dfc
 */

void FUN_00469d78(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 extraout_EDX;
  undefined3 uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (((uVar1 & 1) == 0) || ((char)param_1[0x84] == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = (**(code **)(*param_1 + 0x4c))();
  uVar4 = (undefined3)((uint)extraout_EDX >> 8);
  if (cVar3 == '\0') {
    FUN_00469864((int)param_1,CONCAT31(uVar4,4));
  }
  else if (bVar2) {
    FUN_00469864((int)param_1,CONCAT31(uVar4,1));
  }
  else if ((char)param_1[0x84] == '\0') {
    if (((uVar1 & 0x10) == 0) && ((char)param_1[0x81] == '\0')) {
      FUN_00469864((int)param_1,0);
    }
    else {
      FUN_00469864((int)param_1,CONCAT31(uVar4,2));
    }
  }
  else {
    FUN_00469864((int)param_1,CONCAT31(uVar4,3));
  }
  return;
}



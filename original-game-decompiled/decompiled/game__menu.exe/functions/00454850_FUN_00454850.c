
/* ==== FUN_00454850 @ 00454850 ==== 
 * signature: undefined1 __register FUN_00454850(int param_1, int * param_2, char param_3, char param_4)
 * body: 00454850-00454977
 */

undefined1 FUN_00454850(int param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  code *local_10;
  undefined1 local_a;
  
  if ((*(int *)(param_1 + 0x8c) < param_2[0x23]) || (*(int *)(param_1 + 0x40) < param_2[0x10])) {
    FUN_00403c40("Assertion failure");
  }
  local_a = 1;
  iVar2 = param_2[0xf];
  if ((iVar2 < 0x18) || (*(int *)(param_1 + 0x3c) < 0x20)) {
    local_a = 0;
  }
  else {
    if (param_3 == '\0') {
      if (iVar2 == 0x20) {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_10 = FUN_00454504;
        }
        else {
          local_10 = FUN_00454534;
        }
      }
      else {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_10 = FUN_00454684;
        }
        else {
          local_10 = FUN_004546c0;
        }
      }
    }
    else if (iVar2 == 0x20) {
      if (param_4 == -1) {
        local_10 = FUN_00454584;
      }
      else {
        local_10 = FUN_004545f8;
      }
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x28))();
      if (cVar1 == '\0') {
        local_10 = FUN_00454738;
      }
      else {
        local_10 = FUN_004547ac;
      }
    }
    local_14 = FUN_004569f4((int)param_2);
    local_18 = FUN_004569f4(param_1);
    iVar2 = param_2[0x10] + -1;
    if (-1 < iVar2) {
      do {
        (*local_10)(param_2,local_14,local_18,param_4);
        local_14 = local_14 + param_2[0x11];
        local_18 = local_18 + *(int *)(param_1 + 0x44);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
  }
  return local_a;
}



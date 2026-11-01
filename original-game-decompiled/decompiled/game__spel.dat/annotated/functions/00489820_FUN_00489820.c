
/* ==== FUN_00489820 @ 00489820 ==== 
 * signature: undefined1 * __stdcall FUN_00489820(undefined1 * param_1, undefined4 param_2, int param_3, uint param_4)
 * body: 00489820-0048999d
 */

undefined1 * FUN_00489820(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined1 local_1c [4];
  int iStack_18;
  uint local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056d777;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_4 != 0) {
    do {
      if (param_3 == 0) {
        pcVar2 = "";
      }
      else {
        if ((*(char *)(param_3 + -1) != '\0') && (*(char *)(param_3 + -1) != -1)) {
          FUN_00402a00(&param_2,param_4,'\0');
        }
        if (param_3 != 0) {
          *(undefined1 *)(param_3 + -1) = 0xff;
        }
        pcVar2 = (char *)(param_3 + uVar5);
      }
      cVar4 = *pcVar2;
      if (('`' < cVar4) && (cVar4 < '{')) {
        cVar4 = cVar4 + -0x20;
      }
      if (-local_14 - 1 < 2) {
        FUN_0054b1b4();
      }
      uVar1 = local_14 + 1;
      uVar3 = FUN_00402a00(local_1c,uVar1,'\0');
      if ((char)uVar3 != '\0') {
        *(char *)(local_14 + iStack_18) = cVar4;
        *(undefined1 *)(iStack_18 + uVar1) = 0;
        local_14 = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (iStack_18 != 0) {
    cVar4 = *(char *)(iStack_18 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_0054b339((LPVOID)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar4 + -1;
    }
  }
  iStack_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  if (param_3 != 0) {
    cVar4 = *(char *)(param_3 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_0054b339((LPVOID)(param_3 + -1));
    }
    else {
      *(char *)(param_3 + -1) = cVar4 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}



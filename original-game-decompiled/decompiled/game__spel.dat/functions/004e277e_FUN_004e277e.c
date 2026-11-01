
/* ==== FUN_004e277e @ 004e277e ==== 
 * signature: undefined __fastcall FUN_004e277e(int * param_1, char * param_2)
 * body: 004e277e-004e278f
 */

void __fastcall FUN_004e277e(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack_3d;
  undefined1 *puStack_3c;
  undefined1 auStack_38 [4];
  char *pcStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  *param_1 = *param_1 +
             CONCAT31((int3)((uint)in_EAX >> 8),
                      (char)in_EAX + *param_2 + *param_2 + *param_2 + *param_2);
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_005716c0;
  pvStack_c = ExceptionList;
  auStack_38[0] = uStack_3d;
  uVar3 = 0xffffffff;
  pcVar5 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  pcStack_34 = (char *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(auStack_38,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_invalid_vector<T>_subscript_005a9a38;
    pcVar6 = pcStack_34;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    pcStack_34[uVar3] = '\0';
    uStack_30 = uVar3;
  }
  iStack_4 = 0;
  puStack_3c = &DAT_00712694;
  FUN_00558853(appuStack_28,&puStack_3c);
  iStack_4._0_1_ = 1;
  auStack_1c[0] = auStack_38[0];
  FUN_004028f0(auStack_1c,'\0');
  FUN_004093c0(auStack_1c,auStack_38,0,0xffffffff);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  appuStack_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_0057f4e0);
}



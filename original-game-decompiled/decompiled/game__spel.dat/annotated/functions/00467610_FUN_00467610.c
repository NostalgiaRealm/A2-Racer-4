
/* ==== FUN_00467610 @ 00467610 ==== 
 * signature: undefined __thiscall FUN_00467610(void * this, char * param_1, char * param_2)
 * body: 00467610-004677a5
 */

void __thiscall FUN_00467610(void *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056ac76;
  pvStack_c = ExceptionList;
  iVar8 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)this)();
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_00468530((void *)((int)this + 4),&uStack_34);
      iStack_38 = *piVar3;
      iVar2 = iVar8;
      if (0 < iVar8) {
        do {
          FUN_00448fd0(&iStack_38,&uStack_30);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      pcVar4 = *(char **)(iStack_38 + 0xc);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar2 = __strcmpi(pcVar4,param_1);
      if (iVar2 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar8 = iVar8 + 1;
      iVar2 = (*(code *)**(undefined4 **)this)();
    } while (iVar8 < iVar2);
  }
  auStack_2c[0] = param_2._0_1_;
  FUN_004028f0(auStack_2c,'\0');
  uVar6 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar5 = FUN_00402a00(auStack_2c,uVar6,'\x01');
  if ((char)uVar5 != '\0') {
    pcVar4 = param_2;
    pcVar9 = pcStack_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcStack_28[uVar6] = '\0';
    uStack_24 = uVar6;
  }
  uStack_4 = 0;
  FUN_00468710((void *)((int)this + 0x24),&param_2,(void *)**(undefined4 **)((int)this + 0x28),
               auStack_2c);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_2c,'\x01');
  auStack_1c[0] = param_2._0_1_;
  uVar6 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_00402940(auStack_1c,(undefined4 *)param_1,~uVar6 - 1);
  uStack_4 = 1;
  FUN_00468710((void *)((int)this + 4),&param_1,(void *)**(undefined4 **)((int)this + 8),auStack_1c)
  ;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}



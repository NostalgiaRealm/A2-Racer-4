
/* ==== FUN_004677b0 @ 004677b0 ==== 
 * signature: undefined __thiscall FUN_004677b0(void * this, char * param_1, char * param_2)
 * body: 004677b0-0046795d
 */

void __thiscall FUN_004677b0(void *this,char *param_1,char *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iStack_40;
  void *local_3c;
  void *pvStack_38;
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
  pcStack_8 = FUN_0056ac90;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)((int)this + 0x10);
  iVar9 = 0;
  ExceptionList = &pvStack_c;
  local_3c = this;
  iVar3 = (*(code *)**(undefined4 **)((int)this + 0x10))();
  if (0 < iVar3) {
    pvStack_38 = (void *)((int)this + 0x14);
    do {
      piVar4 = (int *)FUN_00468530(pvStack_38,&uStack_34);
      iStack_40 = *piVar4;
      iVar3 = iVar9;
      if (0 < iVar9) {
        do {
          FUN_00448fd0(&iStack_40,&uStack_30);
          iVar3 = iVar3 + -1;
          this = local_3c;
        } while (iVar3 != 0);
      }
      pcVar5 = *(char **)(iStack_40 + 0xc);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
      }
      iVar3 = __strcmpi(pcVar5,param_1);
      if (iVar3 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar9 = iVar9 + 1;
      iVar3 = (**(code **)*puVar1)();
    } while (iVar9 < iVar3);
  }
  auStack_2c[0] = param_2._0_1_;
  FUN_004028f0(auStack_2c,'\0');
  uVar7 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar6 = FUN_00402a00(auStack_2c,uVar7,'\x01');
  if ((char)uVar6 != '\0') {
    pcVar5 = param_2;
    pcVar10 = pcStack_28;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_28[uVar7] = '\0';
    this = local_3c;
    uStack_24 = uVar7;
  }
  uStack_4 = 0;
  FUN_00468710((void *)((int)this + 0x34),&param_2,(void *)**(undefined4 **)((int)this + 0x38),
               auStack_2c);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_2c,'\x01');
  auStack_1c[0] = param_2._0_1_;
  uVar7 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_00402940(auStack_1c,(undefined4 *)param_1,~uVar7 - 1);
  uStack_4 = 1;
  FUN_00468710((void *)((int)this + 0x14),&param_1,(void *)**(undefined4 **)((int)this + 0x18),
               auStack_1c);
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}



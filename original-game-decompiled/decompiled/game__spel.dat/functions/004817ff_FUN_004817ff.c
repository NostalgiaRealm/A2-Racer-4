
/* ==== FUN_004817ff @ 004817ff ==== 
 * signature: undefined __thiscall FUN_004817ff(void * this, undefined4 * param_1)
 * body: 004817ff-004817ff
 */

void __thiscall FUN_004817ff(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined **ppuVar8;
  float10 fVar9;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056c661;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = FUN_00485340(*(void **)((int)this + 4),param_1);
  auStack_1c[0] = param_1._0_1_;
  uVar3 = 0xffffffff;
  pcStack_18 = (char *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  pcVar5 = s_DISTANCE_005aa08c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(auStack_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_DISTANCE_005aa08c;
    pcVar7 = pcStack_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcStack_18[uVar3] = '\0';
    uStack_14 = uVar3;
  }
  iVar6 = 0;
  uStack_4 = 0;
  fVar9 = FUN_00487640((int)param_1,(int)auStack_1c);
  FUN_0047e9f0(this_00,(float)fVar9);
  uStack_4 = 0xffffffff;
  if (pcStack_18 != (char *)0x0) {
    cVar1 = pcStack_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_18 + -1);
    }
    else {
      pcStack_18[-1] = cVar1 + -1;
    }
  }
  pcStack_18 = (char *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (0 < DAT_005aa004) {
    ppuVar8 = &PTR_DAT_00576c98;
    do {
      FUN_00481940(this_00,ppuVar8);
      iVar6 = iVar6 + 1;
      ppuVar8 = ppuVar8 + 2;
    } while (iVar6 < DAT_005aa004);
  }
  FUN_00481a60(this_00);
  FUN_0047ea10((int)this_00);
  ExceptionList = pvStack_c;
  return;
}



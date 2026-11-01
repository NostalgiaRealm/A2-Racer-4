
/* ==== FUN_004d0e60 @ 004d0e60 ==== 
 * signature: undefined __fastcall FUN_004d0e60(void * param_1)
 * body: 004d0e60-004d1028
 */

void __fastcall FUN_004d0e60(void *param_1)

{
  uint *puVar1;
  char cVar2;
  int *this;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  facet *pfVar6;
  undefined1 *puVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar8;
  undefined1 uStack_21;
  uint local_20;
  facet *local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fa23;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (int *)FUN_004d10f0(param_1,(int *)&local_20);
  local_4 = 1;
  if (DAT_0074db04 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
  }
  iVar3 = FUN_0054ca8b(this,DAT_0074db04,'\x01');
  uVar8 = extraout_ECX;
  if (iVar3 == 0) {
    iVar3 = FUN_0054caca(this);
    if ((char)iVar3 == '\0') {
      FUN_004d1030(local_18);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00584188);
    }
    iVar3 = DAT_0074b88c;
    uVar8 = extraout_ECX_00;
    if (DAT_0074b88c == 0) {
      local_1c = operator_new(0x10);
      local_4._0_1_ = 2;
      if (local_1c == (facet *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_004d1210(local_1c,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar3 = FUN_004d1330((int)puVar4);
      uVar8 = extraout_ECX_01;
      DAT_0074b88c = iVar3;
    }
  }
  *(int *)((int)param_1 + 0x38) = iVar3;
  local_4 = 0xffffffff;
  if (local_20 != 0) {
    iVar3 = *(int *)(local_20 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(local_20 + 4) = iVar3 + -1;
    }
    puVar4 = (undefined4 *)(~-(uint)(*(int *)(local_20 + 4) != 0) & local_20);
    uVar8 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)();
      uVar8 = extraout_ECX_02;
    }
  }
  puVar1 = (uint *)((int)param_1 + 0x4c);
  local_1c = (facet *)&stack0xffffffc8;
  FUN_004d10d0(&stack0xffffffc8,(int *)puVar1);
  puVar5 = (uint *)FUN_004d1150((int *)&local_1c,uVar8);
  uVar8 = *puVar1;
  local_4 = 3;
  if (uVar8 != *puVar5) {
    iVar3 = *(int *)(uVar8 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(uVar8 + 4) = iVar3 + -1;
    }
    puVar4 = (undefined4 *)(~-(uint)(*(int *)(uVar8 + 4) != 0) & uVar8);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)();
    }
    uVar8 = *puVar5;
    *puVar1 = uVar8;
    FUN_004d10c0(uVar8);
  }
  local_4 = 0xffffffff;
  if (local_1c != (facet *)0x0) {
    pfVar6 = std::locale::facet::_Decref(local_1c);
    if (pfVar6 != (facet *)0x0) {
      (*(code *)**(undefined4 **)pfVar6)();
    }
  }
  cVar2 = (**(code **)(**(int **)((int)param_1 + 0x38) + 4))();
  if (cVar2 != '\0') {
    *(undefined4 *)((int)param_1 + 0x38) = 0;
  }
  if (*(int *)((int)param_1 + 0x44) == 0) {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar7 + 4) = 0;
      *puVar7 = uStack_21;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
    }
    *(undefined1 **)((int)param_1 + 0x44) = puVar7;
  }
  ExceptionList = pvStack_c;
  return;
}



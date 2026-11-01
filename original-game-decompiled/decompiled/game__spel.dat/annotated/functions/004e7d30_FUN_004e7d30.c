
/* ==== FUN_004e7d30 @ 004e7d30 ==== 
 * signature: int * __thiscall FUN_004e7d30(void * this, undefined4 param_1, char * param_2)
 * body: 004e7d30-004e7e64;004e7f2a-004e7f51
 */

int * __thiscall FUN_004e7d30(void *this,undefined4 param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int *this_00;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  facet *pfVar7;
  undefined **local_40 [3];
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c;
  void *local_28;
  void *local_24;
  facet *local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_00571e33;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_18 = this;
  local_2c = FUN_004d4c50(this);
  local_8 = 0;
  iVar5 = 0;
  local_28 = this;
  if ((bool)local_2c) {
    this_00 = (int *)FUN_004d4370((void *)(*(int *)(*(int *)this + 4) + (int)this),(int *)&local_20)
    ;
    local_8._0_1_ = 2;
    uVar3 = FUN_004d4350(&DAT_0074db14);
    piVar4 = (int *)FUN_0054ca8b(this_00,uVar3,'\x01');
    if (piVar4 == (int *)0x0) {
      iVar5 = FUN_0054caca(this_00);
      if ((char)iVar5 == '\0') {
        param_2 = s_missing_locale_facet_005b6f34;
        FUN_00558853(local_40,&param_2);
        local_40[0] = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_40,&DAT_00584188);
      }
      piVar4 = DAT_0074b894;
      if (DAT_0074b894 == (int *)0x0) {
        local_24 = operator_new(8);
        local_8._0_1_ = 3;
        if (local_24 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_004d4f60(local_24,0);
        }
        local_8._0_1_ = 2;
        piVar4 = (int *)FUN_004d6550((int)puVar6);
        DAT_0074b894 = piVar4;
      }
    }
    local_8._0_1_ = 0;
    if ((local_20 != (facet *)0x0) &&
       (pfVar7 = std::locale::facet::_Decref(local_20), pfVar7 != (facet *)0x0)) {
      (*(code *)**(undefined4 **)pfVar7)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (this == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)this + 4) + (int)this;
    }
    local_24 = (void *)CONCAT31(local_24._1_3_,
                                *(undefined1 *)(*(int *)(*(int *)this + 4) + 0x30 + (int)this));
    local_34 = local_34 & 0xffffff00;
    puVar6 = (undefined4 *)
             (**(code **)(*piVar4 + 0xc))
                       (&param_1,local_34,
                        *(undefined4 *)((int)this + *(int *)(*(int *)this + 4) + 0x28),iVar5,
                        local_24,param_1,param_2);
    local_30 = puVar6[1];
    iVar5 = local_1c;
    if ((char)*puVar6 != '\0') {
      local_1c = 4;
      piVar4 = (int *)FUN_004e7e8e();
      return piVar4;
    }
  }
  local_8 = 0;
  if (iVar5 != 0) {
    FUN_0054c6db();
  }
  local_8 = 0xffffffff;
  cVar2 = FUN_0054eb4d();
  if ((cVar2 == '\0') &&
     (iVar5 = *(int *)(*(int *)this + 4), (*(byte *)((int)this + iVar5 + 0xc) & 2) != 0)) {
    bVar1 = false;
    if (((*(byte *)((int)this + iVar5 + 4) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)((int)this + iVar5 + 0x28) + 0x2c))(), iVar5 == -1)) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0054c6db();
    }
  }
  ExceptionList = pvStack_10;
  return this;
}



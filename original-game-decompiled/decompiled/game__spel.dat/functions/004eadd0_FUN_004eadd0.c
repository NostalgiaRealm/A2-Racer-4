
/* ==== FUN_004eadd0 @ 004eadd0 ==== 
 * signature: float10 __thiscall FUN_004eadd0(void * param_1, int param_2, float * param_3)
 * body: 004eadd0-004eaf4a
 */

float10 __thiscall FUN_004eadd0(void *param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_94 [28];
  undefined1 local_78 [28];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005722c8;
  local_c = ExceptionList;
  iVar6 = 0;
  if (*(char *)((int)param_1 + 0x60) == '\0') {
    ExceptionList = &local_c;
    puVar2 = FUN_0049df90(local_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar3 = (undefined4 *)FUN_004796b0(local_3c,puVar2,s_InputManager_not_initted_yet__Ca_005b7910)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_78,puVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_78,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar4 = FUN_004ea810(param_1,param_2);
  if (iVar4 != -1) {
    iVar1 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x54) + 4) + 0x38 + iVar4 * 0x3c);
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)
                 FUN_004ee110((void *)(iVar4 * 0x3c + *(int *)(*(int *)((int)param_1 + 0x54) + 4)),
                              iVar6);
        fVar7 = FUN_004eac80((int)param_1,puVar3,param_3);
        if ((float10)0.0 < fVar7) {
          ExceptionList = local_c;
          return fVar7;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    ExceptionList = local_c;
    return (float10)0.0;
  }
  puVar2 = FUN_0049df90(local_1c,(byte *)s_Action__s_does_not_exist__005b7964);
  local_4 = 2;
  puVar5 = FUN_0049df90(local_5c,(byte *)s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 3;
  puVar3 = (undefined4 *)FUN_0047c9a0(local_4c,puVar5,(int)puVar2);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004edac0(local_94,puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_94,&DAT_005872d0);
}



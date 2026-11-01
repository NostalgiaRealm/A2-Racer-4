
/* ==== FUN_0048fc90 @ 0048fc90 ==== 
 * signature: undefined __fastcall FUN_0048fc90(int param_1)
 * body: 0048fc90-0048ffd9
 */

void __fastcall FUN_0048fc90(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *this;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 auStack_90 [3];
  undefined4 local_84 [30];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056df28;
  local_c = ExceptionList;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    if (*(int *)(param_1 + 0x3c4) == 0) {
      ExceptionList = &local_c;
      FUN_0049c910(local_84);
      local_4 = 0;
      local_cc = 0.3;
      local_c8 = 2.0 / (float)*(int *)(param_1 + 0x2c0);
      if (*(int *)(param_1 + 0x34) != 3) {
        FUN_0048f0d0(&local_b4,&local_c4);
        local_a4 = 3.0;
        FUN_0049cb60((void *)(param_1 + 0x38),&local_c4,&local_b4,&local_a4);
        FUN_0048f140(&local_b4,&local_c4);
        local_a8 = 3.0;
        FUN_0049cb60((void *)(param_1 + 0xb0),&local_c4,&local_b4,&local_a8);
        *(undefined4 *)(param_1 + 0x34) = 0x1000002;
        *(undefined4 *)(param_1 + 0x30) = 0x1000002;
        if (*(int **)(param_1 + 0x250) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x250) + 0x20))(0);
          *(undefined4 *)(param_1 + 0x250) = 0;
        }
      }
      iVar5 = 0;
      local_c4 = -2.0;
      local_bc = 0.0;
      local_b4 = -0.4;
      local_ac = 0;
      local_c0 = 0.3;
      local_b0 = 0.3;
      if (0 < *(int *)(param_1 + 0x2c0)) {
        do {
          FUN_0049cb60(local_84,&local_c4,&local_b4,&local_cc);
          FUN_00490a20(*(void **)(param_1 + 0x3cc),*(int *)((int)*(void **)(param_1 + 0x3cc) + 8),
                       (int)local_84);
          local_c0 = local_c0 - local_c8;
          iVar5 = iVar5 + 1;
          local_b0 = local_b0 - local_c8;
          local_cc = local_cc + 0.5;
        } while (iVar5 < *(int *)(param_1 + 0x2c0));
      }
      *(undefined4 *)(param_1 + 0x3c4) = 1;
      local_4 = 0xffffffff;
      FUN_0049c920(local_84);
    }
    else if (*(int *)(param_1 + 0x3c4) == 1) {
      ExceptionList = &local_c;
      FUN_004028f0(local_a0,'\0');
      local_4 = 1;
      if (*(int *)(param_1 + 0x34) == 3) {
        if (*(int *)(param_1 + 0x30) == 3) {
          iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2b0))();
          iVar6 = 0;
          fVar7 = (float)(iVar2 + -1);
          local_c8 = -NAN;
          local_cc = fVar7;
          if (0 < (int)fVar7) {
            do {
              cVar1 = FUN_0049d240(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) + iVar6 * 4));
              if (cVar1 != '\0') {
                pvVar3 = (void *)FUN_0049d210(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) +
                                                      iVar6 * 4));
                FUN_004093c0(local_a0,pvVar3,0,0xffffffff);
                this = (int *)FUN_0049d230(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) +
                                                   iVar6 * 4));
                (**(code **)(*this + 0x28))(&local_c8);
                iVar2 = FUN_0049ca80(iVar5 + *(int *)(*(int *)(param_1 + 0x3cc) + 4));
                if (iVar2 != 1) {
                  pfVar4 = (float *)FUN_0049c9e0((void *)(iVar5 + *(int *)(*(int *)(param_1 + 0x3cc)
                                                                          + 4)),auStack_90);
                  local_c4 = *pfVar4;
                  local_c0 = pfVar4[1];
                  local_bc = pfVar4[2];
                  FUN_0047bc50(this,&local_c4);
                  (**(code **)(*this + 0x20))(1);
                }
                iVar5 = iVar5 + 0x78;
                fVar7 = local_cc;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)fVar7);
          }
          *(undefined4 *)(param_1 + 0x3c4) = 2;
        }
        if (local_9c != 0) {
          cVar1 = *(char *)(local_9c + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((LPVOID)(local_9c + -1));
          }
          else {
            *(char *)(local_9c + -1) = cVar1 + -1;
          }
        }
      }
      else {
        local_4 = 0xffffffff;
        FUN_004028f0(local_a0,'\x01');
      }
    }
  }
  ExceptionList = local_c;
  return;
}



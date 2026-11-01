
/* ==== FUN_0048fc82 @ 0048fc82 ==== 
 * signature: undefined __fastcall FUN_0048fc82(int param_1)
 * body: 0048fc82-0048fc8f
 */

void __fastcall FUN_0048fc82(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *this;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 auStack_90 [3];
  undefined4 auStack_84 [30];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056df28;
  pvStack_c = ExceptionList;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    if (*(int *)(param_1 + 0x3c4) == 0) {
      ExceptionList = &pvStack_c;
      FUN_0049c910(auStack_84);
      uStack_4 = 0;
      fStack_cc = 0.3;
      fStack_c8 = 2.0 / (float)*(int *)(param_1 + 0x2c0);
      if (*(int *)(param_1 + 0x34) != 3) {
        FUN_0048f0d0(&fStack_b4,&fStack_c4);
        fStack_a4 = 3.0;
        FUN_0049cb60((void *)(param_1 + 0x38),&fStack_c4,&fStack_b4,&fStack_a4);
        FUN_0048f140(&fStack_b4,&fStack_c4);
        fStack_a8 = 3.0;
        FUN_0049cb60((void *)(param_1 + 0xb0),&fStack_c4,&fStack_b4,&fStack_a8);
        *(undefined4 *)(param_1 + 0x34) = 0x1000002;
        *(undefined4 *)(param_1 + 0x30) = 0x1000002;
        if (*(int **)(param_1 + 0x250) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x250) + 0x20))(0);
          *(undefined4 *)(param_1 + 0x250) = 0;
        }
      }
      iVar5 = 0;
      fStack_c4 = -2.0;
      fStack_bc = 0.0;
      fStack_b4 = -0.4;
      uStack_ac = 0;
      fStack_c0 = 0.3;
      fStack_b0 = 0.3;
      if (0 < *(int *)(param_1 + 0x2c0)) {
        do {
          FUN_0049cb60(auStack_84,&fStack_c4,&fStack_b4,&fStack_cc);
          FUN_00490a20(*(void **)(param_1 + 0x3cc),*(int *)((int)*(void **)(param_1 + 0x3cc) + 8),
                       (int)auStack_84);
          fStack_c0 = fStack_c0 - fStack_c8;
          iVar5 = iVar5 + 1;
          fStack_b0 = fStack_b0 - fStack_c8;
          fStack_cc = fStack_cc + 0.5;
        } while (iVar5 < *(int *)(param_1 + 0x2c0));
      }
      *(undefined4 *)(param_1 + 0x3c4) = 1;
      uStack_4 = 0xffffffff;
      FUN_0049c920(auStack_84);
    }
    else if (*(int *)(param_1 + 0x3c4) == 1) {
      ExceptionList = &pvStack_c;
      FUN_004028f0(auStack_a0,'\0');
      uStack_4 = 1;
      if (*(int *)(param_1 + 0x34) == 3) {
        if (*(int *)(param_1 + 0x30) == 3) {
          iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2b0))();
          iVar6 = 0;
          fVar7 = (float)(iVar2 + -1);
          fStack_c8 = -NAN;
          fStack_cc = fVar7;
          if (0 < (int)fVar7) {
            do {
              cVar1 = FUN_0049d240(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) + iVar6 * 4));
              if (cVar1 != '\0') {
                pvVar3 = (void *)FUN_0049d210(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) +
                                                      iVar6 * 4));
                FUN_004093c0(auStack_a0,pvVar3,0,0xffffffff);
                this = (int *)FUN_0049d230(*(int *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) +
                                                   iVar6 * 4));
                (**(code **)(*this + 0x28))(&fStack_c8);
                iVar2 = FUN_0049ca80(iVar5 + *(int *)(*(int *)(param_1 + 0x3cc) + 4));
                if (iVar2 != 1) {
                  pfVar4 = (float *)FUN_0049c9e0((void *)(iVar5 + *(int *)(*(int *)(param_1 + 0x3cc)
                                                                          + 4)),auStack_90);
                  fStack_c4 = *pfVar4;
                  fStack_c0 = pfVar4[1];
                  fStack_bc = pfVar4[2];
                  FUN_0047bc50(this,&fStack_c4);
                  (**(code **)(*this + 0x20))(1);
                }
                iVar5 = iVar5 + 0x78;
                fVar7 = fStack_cc;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)fVar7);
          }
          *(undefined4 *)(param_1 + 0x3c4) = 2;
        }
        if (iStack_9c != 0) {
          cVar1 = *(char *)(iStack_9c + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((LPVOID)(iStack_9c + -1));
          }
          else {
            *(char *)(iStack_9c + -1) = cVar1 + -1;
          }
        }
      }
      else {
        uStack_4 = 0xffffffff;
        FUN_004028f0(auStack_a0,'\x01');
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}



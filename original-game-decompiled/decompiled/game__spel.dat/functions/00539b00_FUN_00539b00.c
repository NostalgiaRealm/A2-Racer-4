
/* ==== FUN_00539b00 @ 00539b00 ==== 
 * signature: undefined __stdcall FUN_00539b00(void)
 * body: 00539b00-0053a20c
 */

void FUN_00539b00(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iStack00000008;
  undefined1 *puStack00000010;
  uint uStack00000014;
  int iStack00000018;
  int iStack00000020;
  int in_stack_00000038;
  int in_stack_0000003c;
  ushort in_stack_00000050;
  ushort in_stack_00000052;
  undefined2 in_stack_00000054;
  undefined2 in_stack_00000056;
  int in_stack_00000258;
  int in_stack_0000025c;
  undefined1 *in_stack_00000260;
  int in_stack_00000664;
  int in_stack_00000668;
  undefined1 *in_stack_0000066c;
  void *in_stack_00001270;
  int in_stack_00001280;
  int in_stack_00001284;
  double in_stack_00001288;
  ushort *in_stack_00001290;
  int in_stack_00001294;
  int in_stack_00001298;
  undefined4 in_stack_000012a4;
  undefined8 local_c;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  local_c = (double)CONCAT44(FUN_005741b8,ExceptionList);
  ExceptionList = &local_c;
  FUN_00559400();
  iVar7 = *(int *)(in_stack_00001280 + 0x18);
  iStack00000008 = iVar7;
  FUN_0053baf0(&stack0x00000664,&stack0x00000670,0x100);
  FUN_0053baf0(&stack0x00000258,&stack0x00000264,0x100);
  if (in_stack_00001294 == 0) {
    iVar2 = *(int *)(in_stack_00001284 + 0xa4);
    local_c = *(double *)(iVar7 + 0x120) - *(double *)(iVar2 + 0x68);
    FUN_00500b70(&stack0x00000010,(double *)(iVar2 + 0xb8),(float *)(iVar2 + 0xd8),local_c);
    local_c = (double)(*(float *)(in_stack_00001280 + 0xa0) + *(float *)(iVar2 + 4) +
                      (float)in_stack_00001288);
    if (*(int *)(in_stack_00001280 + 0x40) == 0) {
      puVar5 = FUN_004fe470(*(void **)(*(int *)(in_stack_00001280 + 0x18) + 0xa4),in_stack_00001280)
      ;
      *(undefined4 **)(in_stack_00001280 + 0x40) = puVar5;
    }
    if ((*(int *)(in_stack_00001280 + 0x80) * 0x1000000 < 0x8000000) &&
       (**(int **)(in_stack_00001280 + 0x40) < *(int *)(*(int *)(in_stack_00001280 + 0x18) + 0x138))
       ) {
      FUN_004fe580(*(int **)(in_stack_00001280 + 0x40));
    }
    FUN_004fabb0((void *)(*(int *)(in_stack_00001280 + 0x40) + 0x30),(double *)&stack0x00000010,
                 (double *)&stack0x00000030);
    (**(code **)(**(int **)(in_stack_00001280 + 0x8c) + 0x10))();
  }
  else {
    if (in_stack_00000664 <= in_stack_00000668) {
      FUN_0050a360((int *)&stack0x00000664);
    }
    *(int *)(in_stack_0000066c + in_stack_00000668 * 4) = in_stack_00001294;
    in_stack_00000668 = in_stack_00000668 + 1;
  }
  if (in_stack_00001298 == 0) {
    iVar2 = *(int *)(in_stack_00001280 + 0xa4);
    local_c = *(double *)(iVar7 + 0x120) - *(double *)(iVar2 + 0x68);
    FUN_00500b70(&stack0x00000010,(double *)(iVar2 + 0xb8),(float *)(iVar2 + 0xd8),local_c);
    local_c = (double)(*(float *)(in_stack_00001284 + 0xa0) + *(float *)(iVar2 + 4) +
                      (float)in_stack_00001288);
    if (*(int *)(in_stack_00001284 + 0x40) == 0) {
      puVar5 = FUN_004fe470(*(void **)(*(int *)(in_stack_00001284 + 0x18) + 0xa4),in_stack_00001284)
      ;
      *(undefined4 **)(in_stack_00001284 + 0x40) = puVar5;
    }
    if ((*(int *)(in_stack_00001284 + 0x80) * 0x1000000 < 0x8000000) &&
       (**(int **)(in_stack_00001284 + 0x40) < *(int *)(*(int *)(in_stack_00001284 + 0x18) + 0x138))
       ) {
      FUN_004fe580(*(int **)(in_stack_00001284 + 0x40));
    }
    FUN_004fabb0((void *)(*(int *)(in_stack_00001284 + 0x40) + 0x30),(double *)&stack0x00000010,
                 (double *)&stack0x00000030);
    (**(code **)(**(int **)(in_stack_00001284 + 0x8c) + 0x10))();
  }
  else {
    if (in_stack_00000258 <= in_stack_0000025c) {
      FUN_0050a360((int *)&stack0x00000258);
    }
    *(int *)(in_stack_00000260 + in_stack_0000025c * 4) = in_stack_00001298;
    in_stack_0000025c = in_stack_0000025c + 1;
  }
  uVar11 = 0x400;
  uVar12 = (uint)in_stack_00001290[1];
  iVar7 = (in_stack_0000025c * in_stack_00000668 + uVar12) * 2 + 2;
  if (iVar7 < 0x400) {
    do {
      uVar11 = (int)uVar11 >> 1;
    } while (iVar7 < (int)uVar11);
  }
  if (uVar12 < uVar11) {
    uVar12 = uVar11 - 1;
    iStack00000018 = 0;
    puVar6 = &stack0x00000a70;
    uStack00000014 = uVar12;
  }
  else {
    iStack00000018 = 1;
    if (uVar11 <= uVar12 * 2) {
      do {
        uVar11 = uVar11 * 2;
      } while (uVar11 + uVar12 * -2 == 0 || (int)uVar11 < (int)(uVar12 * 2));
    }
    uVar12 = uVar11 - 1;
    uStack00000014 = uVar12;
    puVar6 = (undefined1 *)FUN_004f5a90(uVar11 * 2);
  }
  iVar7 = (int)uVar12 >> 1;
  iStack00000020 = 0;
  if (-1 < iVar7) {
    puVar5 = (undefined4 *)(puVar6 + iVar7 * 4);
    iVar7 = iVar7 + 1;
    do {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + -1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar11 = (uint)in_stack_00001290[1];
  puStack00000010 = puVar6;
  while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
    uVar8 = FUN_0053a240(*(int **)(*(int *)(in_stack_00001290 + 2) + uVar11 * 4));
    uVar8 = uVar8 & uVar12;
    sVar1 = *(short *)(puVar6 + uVar8 * 2);
    while (sVar1 != -1) {
      uVar8 = uVar8 + 1 & uVar12;
      sVar1 = *(short *)(puVar6 + uVar8 * 2);
    }
    *(short *)(puVar6 + uVar8 * 2) = (short)uVar11;
  }
  FUN_004f53e0(&stack0x00000050,&stack0x00000058,0x80);
  iVar7 = iStack00000020;
  do {
    iStack_4 = in_stack_00000668 + -1;
    iStack00000020 = iVar7;
    if (iStack_4 < 0) {
      uVar12 = (uint)in_stack_00001290[1];
      while (uVar12 = uVar12 - 1, iVar7 <= (int)uVar12) {
        piVar3 = *(int **)(*(int *)(in_stack_00001290 + 2) + uVar12 * 4);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x10))();
        }
      }
      uVar12 = (uint)in_stack_00000052;
      while (uVar12 = uVar12 - 1, -1 < (int)uVar12) {
        pvVar10 = *(void **)(CONCAT22(in_stack_00000056,in_stack_00000054) + uVar12 * 4);
        if (*in_stack_00001290 <= in_stack_00001290[1]) {
          FUN_004f6060(in_stack_00001290);
        }
        *(void **)(*(int *)(in_stack_00001290 + 2) + (uint)in_stack_00001290[1] * 4) = pvVar10;
        FUN_0053bb90(pvVar10,-1,(uint)in_stack_00001290[1]);
        in_stack_00001290[1] = in_stack_00001290[1] + 1;
      }
      if ((undefined1 *)CONCAT22(in_stack_00000056,in_stack_00000054) != &stack0x00000058) {
        if ((undefined1 *)CONCAT22(in_stack_00000056,in_stack_00000054) != (undefined1 *)0x0) {
          FUN_00559d4e((LPVOID)CONCAT22(in_stack_00000056,in_stack_00000054));
          in_stack_00000054 = 0;
          in_stack_00000056 = 0;
        }
        in_stack_00000050 = 0;
      }
      in_stack_00000052 = 0;
      if ((iStack00000018 != 0) && (puVar6 != (undefined1 *)0x0)) {
        FUN_00559d4e(puVar6);
      }
      if ((in_stack_00000260 != &stack0x00000264) && (in_stack_00000260 != (undefined1 *)0x0)) {
        FUN_00559d4e(in_stack_00000260);
      }
      if ((in_stack_0000066c != &stack0x00000670) && (in_stack_0000066c != (undefined1 *)0x0)) {
        FUN_00559d4e(in_stack_0000066c);
      }
      ExceptionList = in_stack_00001270;
      return;
    }
    iVar2 = *(int *)(in_stack_0000066c + iStack_4 * 4);
    in_stack_00000038 = iVar2;
    iVar4 = in_stack_0000025c;
    while (iVar4 = iVar4 + -1, iVar7 = iStack00000020, in_stack_00000668 = iStack_4, -1 < iVar4) {
      iVar7 = *(int *)(in_stack_00000260 + iVar4 * 4);
      in_stack_0000003c = iVar7;
      uVar11 = FUN_0053a210((int)&stack0x00000030);
      uVar11 = uVar11 & uVar12;
      iVar13 = (int)*(short *)(puVar6 + uVar11 * 2);
      if (iVar13 == -1) {
LAB_00539fe8:
        if (((*(byte *)(iVar2 + 8) & 3) == 0) && ((*(byte *)(iVar7 + 8) & 3) == 0)) {
          pvVar10 = operator_new(0x88);
          local_c = (double)CONCAT44(local_c._4_4_,pvVar10);
          if (pvVar10 == (void *)0x0) {
LAB_0053a062:
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = FUN_005397a0(pvVar10,iStack00000008,in_stack_000012a4);
          }
        }
        else {
          pvVar10 = operator_new(0x98);
          local_c = (double)CONCAT44(local_c._4_4_,pvVar10);
          if (pvVar10 == (void *)0x0) goto LAB_0053a062;
          puVar5 = FUN_00510700(pvVar10,iStack00000008,in_stack_000012a4);
        }
        FUN_005399a0(puVar5,in_stack_00001280,in_stack_00001284,iVar2 + 0x14,iVar7 + 0x14);
        if (in_stack_00000050 <= in_stack_00000052) {
          FUN_004f6060(&stack0x00000050);
        }
        *(undefined4 **)
         (CONCAT22(in_stack_00000056,in_stack_00000054) + (uint)in_stack_00000052 * 4) = puVar5;
        in_stack_00000052 = in_stack_00000052 + 1;
      }
      else {
LAB_00539f48:
        piVar3 = *(int **)(*(int *)(in_stack_00001290 + 2) + iVar13 * 4);
        local_c = (double)CONCAT44(local_c._4_4_,piVar3);
        iVar9 = FUN_0053a280(piVar3);
        if (iVar9 == 0) goto code_r0x00539f6b;
        if (iStack00000020 < iVar13) {
          uVar8 = FUN_0053a240(*(int **)(*(int *)(in_stack_00001290 + 2) + iStack00000020 * 4));
          uVar8 = uVar8 & uVar12;
          sVar1 = *(short *)(puVar6 + uVar8 * 2);
          while (sVar1 != iStack00000020) {
            uVar8 = uVar8 + 1 & uVar12;
            sVar1 = *(short *)(puVar6 + uVar8 * 2);
          }
          *(short *)(puVar6 + uVar8 * 2) = (short)iVar13;
          *(short *)(puVar6 + uVar11 * 2) = (short)iStack00000020;
          FUN_0053bb40(in_stack_00001290,iStack00000020,iVar13);
        }
        iStack00000020 = iStack00000020 + 1;
        if ((int)local_c == 0) goto LAB_00539fe8;
      }
    }
  } while( true );
code_r0x00539f6b:
  uVar11 = uVar11 + 1 & uVar12;
  iVar13 = (int)*(short *)(puVar6 + uVar11 * 2);
  if (iVar13 == -1) goto LAB_00539fe8;
  goto LAB_00539f48;
}



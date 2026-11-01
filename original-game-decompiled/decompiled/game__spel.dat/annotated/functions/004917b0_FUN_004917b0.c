
/* ==== FUN_004917b0 @ 004917b0 ==== 
 * signature: undefined __fastcall FUN_004917b0(int param_1)
 * body: 004917b0-0049197a
 */

void __fastcall FUN_004917b0(int param_1)

{
  void *this;
  float *pfVar1;
  float10 fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this = (void *)FUN_0049eb50(&DAT_006fbb5c,*(int *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) {
    fVar2 = FUN_004a6800(0x7128b0);
    fVar2 = (float10)*(float *)(param_1 + 8) / ((float10)0.25 / fVar2);
    local_10 = (float)fVar2;
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x18) = (float)fVar2;
    if ((float10)*(float *)(param_1 + 8) < fVar2) {
      local_10 = (float)((float10)local_10 - (fVar2 - (float10)*(float *)(param_1 + 8)));
    }
    pfVar1 = (float *)FUN_0047bc40(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc));
    local_8 = pfVar1[1];
    local_c = *pfVar1 + local_10;
    local_4 = pfVar1[2];
    FUN_0047bc90(*(void **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc),&local_c);
    if (((*(int *)(param_1 + 0xc) + 1) % 10 == 0) && (*(int *)(param_1 + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 8));
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90(*(void **)(*(int *)(*(int *)(param_1 + 4) + 4) + 8),&local_c);
    }
    if (((*(int *)(param_1 + 0xc) + 1) % 100 == 0) && (*(int *)(param_1 + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4));
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90(*(void **)(*(int *)(*(int *)(param_1 + 4) + 4) + 4),&local_c);
    }
    if (((*(int *)(param_1 + 0xc) + 1) % 1000 == 0) && (*(int *)(param_1 + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40(**(int **)(*(int *)(param_1 + 4) + 4));
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90((void *)**(undefined4 **)(*(int *)(param_1 + 4) + 4),&local_c);
    }
    if (*(float *)(param_1 + 8) <= *(float *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      FUN_0049e550(this,0);
    }
  }
  return;
}



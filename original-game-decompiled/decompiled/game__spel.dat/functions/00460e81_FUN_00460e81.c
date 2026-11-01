
/* ==== FUN_00460e81 @ 00460e81 ==== 
 * signature: undefined4 __thiscall FUN_00460e81(void * this, float param_1, float param_2)
 * body: 00460e81-00460e8f
 */

undefined4 __thiscall FUN_00460e81(void *this,float param_1,float param_2)

{
  float *pfVar1;
  char cVar2;
  undefined4 *extraout_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *this_00;
  float10 fVar5;
  float afStack_c [2];
  float fStack_4;
  
  *(float *)((int)this + 8) = param_1 + *(float *)((int)this + 8);
  if (*(int *)((int)this + 0xac) != 0) {
    pfVar1 = (float *)((int)this + 0x6c);
    *(float *)((int)this + 0x40) =
         param_1 * *(float *)((int)this + 0x6c) + *(float *)((int)this + 0x40);
    *(float *)((int)this + 0x44) =
         param_1 * *(float *)((int)this + 0x70) + *(float *)((int)this + 0x44);
    *(float *)((int)this + 0x48) =
         param_1 * *(float *)((int)this + 0x74) + *(float *)((int)this + 0x48);
    FUN_004603b0(pfVar1,afStack_c);
    FUN_00460370(afStack_c);
    fVar5 = FUN_00460340(pfVar1);
    fVar5 = fVar5 - (float10)param_1 * (float10)50.0;
    *pfVar1 = (float)(fVar5 * (float10)afStack_c[0]);
    *(float *)((int)this + 0x74) = (float)(fVar5 * (float10)fStack_4);
    this_00 = *(undefined4 **)((int)this + 0xac);
    puVar4 = extraout_EAX;
    while (this_00 != (undefined4 *)0x0) {
      cVar2 = FUN_004612c0(this_00,param_1,param_2);
      if (cVar2 == '\0') {
        puVar3 = (undefined4 *)FUN_0045e0d0((int)this_00);
        puVar4 = FUN_0045e040(this_00);
        *(undefined4 **)((int)this + 0xac) = puVar4;
        this_00 = puVar3;
      }
      else {
        this_00 = (undefined4 *)FUN_0045e0d0((int)this_00);
        puVar4 = this_00;
      }
    }
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  return 0;
}



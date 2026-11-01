
/* ==== FUN_0045a420 @ 0045a420 ==== 
 * signature: undefined4 __thiscall FUN_0045a420(void * this, float param_1)
 * body: 0045a420-0045a4d3
 */

undefined4 __thiscall FUN_0045a420(void *this,float param_1)

{
  float *pfVar1;
  char cVar2;
  undefined4 *extraout_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *this_00;
  float10 fVar5;
  float local_c [2];
  float local_4;
  
  *(float *)((int)this + 8) = param_1 + *(float *)((int)this + 8);
  if (*(int *)((int)this + 0xac) != 0) {
    pfVar1 = (float *)((int)this + 0x6c);
    FUN_004603b0(pfVar1,local_c);
    FUN_00460370(local_c);
    fVar5 = FUN_00460340(pfVar1);
    fVar5 = fVar5 - (float10)param_1 * (float10)50.0;
    *pfVar1 = (float)(fVar5 * (float10)local_c[0]);
    *(float *)((int)this + 0x74) = (float)(fVar5 * (float10)local_4);
    this_00 = *(undefined4 **)((int)this + 0xac);
    puVar4 = extraout_EAX;
    while (this_00 != (undefined4 *)0x0) {
      cVar2 = FUN_0045a770(this_00,param_1);
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



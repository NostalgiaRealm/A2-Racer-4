
/* ==== FUN_0045e920 @ 0045e920 ==== 
 * signature: undefined4 __thiscall FUN_0045e920(void * this, float param_1)
 * body: 0045e920-0045ebe5
 */

undefined4 __thiscall FUN_0045e920(void *this,float param_1)

{
  float fVar1;
  undefined4 *this_00;
  char cVar2;
  undefined4 in_EAX;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float fVar8;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_1 + *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar1;
  fVar8 = *(float *)((int)this + 0xc);
  puVar5 = (undefined4 *)
           CONCAT22((short)((uint)in_EAX >> 0x10),
                    (ushort)(fVar1 < fVar8) << 8 | (ushort)(NAN(fVar1) || NAN(fVar8)) << 10 |
                    (ushort)(fVar1 == fVar8) << 0xe);
  if ((fVar1 < fVar8 == 0 && (fVar1 == fVar8) == 0) &&
     (puVar5 = *(undefined4 **)((int)this + 0x98), puVar5 == (undefined4 *)0x0)) {
    return 0;
  }
  *(float *)((int)this + 0x40) =
       param_1 * *(float *)((int)this + 0x6c) + *(float *)((int)this + 0x40);
  *(float *)((int)this + 0x44) =
       param_1 * *(float *)((int)this + 0x70) + *(float *)((int)this + 0x44);
  *(float *)((int)this + 0x48) =
       param_1 * *(float *)((int)this + 0x74) + *(float *)((int)this + 0x48);
  this_00 = *(undefined4 **)((int)this + 0x98);
joined_r0x0045e97d:
  do {
    if (this_00 == (undefined4 *)0x0) {
      return CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
    cVar2 = FUN_0045e230(this_00,param_1);
    if (cVar2 == '\0') {
      if (*(float *)((int)this + 8) < *(float *)((int)this + 0xc)) {
        if (*(char *)((int)this + 4) != '\0') {
          pfVar3 = (float *)FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_c = (float)(fVar7 + (float10)*pfVar3);
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(5.0,8.0);
          local_8 = (float)(fVar7 + (float10)*(float *)(iVar4 + 4));
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_4 = (float)(fVar7 + (float10)*(float *)(iVar4 + 8));
          puVar5 = (undefined4 *)FUN_0045e090((int)this_00);
          pfVar3 = &local_c;
          fVar7 = FUN_004602e0(0.25,1.0);
          fVar8 = (float)fVar7;
          fVar7 = FUN_004602e0(1.5,2.5);
          FUN_0045df70(this_00,(float)fVar7,fVar8,pfVar3,puVar5);
          pfVar3 = (float *)FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_c = (float)(fVar7 + (float10)*pfVar3);
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(5.0,8.0);
          local_8 = (float)(fVar7 + (float10)*(float *)(iVar4 + 4));
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_4 = (float)(fVar7 + (float10)*(float *)(iVar4 + 8));
          puVar5 = (undefined4 *)FUN_0045e090((int)this_00);
          pfVar3 = &local_c;
          fVar7 = FUN_004602e0(0.25,1.0);
          fVar8 = (float)fVar7;
          fVar7 = FUN_004602e0(1.5,2.5);
          FUN_0045df70(this_00,(float)fVar7,fVar8,pfVar3,puVar5);
          pfVar3 = (float *)FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_c = (float)(fVar7 + (float10)*pfVar3);
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(5.0,8.0);
          local_8 = (float)(fVar7 + (float10)*(float *)(iVar4 + 4));
          iVar4 = FUN_0045e0b0((int)this_00);
          fVar7 = FUN_004602e0(-4.0,4.0);
          local_4 = (float)(fVar7 + (float10)*(float *)(iVar4 + 8));
          puVar5 = (undefined4 *)FUN_0045e090((int)this_00);
          pfVar3 = &local_c;
          fVar7 = FUN_004602e0(0.25,1.0);
          fVar8 = (float)fVar7;
          fVar7 = FUN_004602e0(1.5,2.5);
          FUN_0045df70(this_00,(float)fVar7,fVar8,pfVar3,puVar5);
        }
      }
      else if (*(char *)((int)this + 4) == '\0') {
        puVar6 = (undefined4 *)FUN_0045e0d0((int)this_00);
        puVar5 = FUN_0045e040(this_00);
        *(undefined4 **)((int)this + 0x98) = puVar5;
        this_00 = puVar6;
        goto joined_r0x0045e97d;
      }
      FUN_0045e240((int)this_00);
    }
    puVar5 = (undefined4 *)FUN_0045e0d0((int)this_00);
    this_00 = puVar5;
  } while( true );
}



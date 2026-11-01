
/* ==== rd_read_plane @ 004b31a0 ==== 
 * signature: undefined __thiscall rd_read_plane(void * this, int * param_1)
 * body: 004b31a0-004b3282
 * note: ANALYST: One plane: 4 vertices and 6 indices. [confidence: confirmed] [evidence: code]
 */

/* ANALYST: One plane: 4 vertices and 6 indices. [confidence: confirmed] [evidence: code] */

void __thiscall rd_read_plane(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined2 local_4 [2];
  
  piVar1 = param_1;
  pcVar4 = (char *)((int)this + 8);
  iVar2 = 4;
  do {
    FUN_00558b35(pcVar4 + -8,4,1,piVar1);
    FUN_00558b35(pcVar4 + -4,4,1,piVar1);
    FUN_00558b35(pcVar4,4,1,piVar1);
    FUN_00558b35(pcVar4 + 0x10,4,1,piVar1);
    FUN_00558b35(pcVar4 + 0x14,4,1,piVar1);
    if (DAT_00715f54 == -1) {
      FUN_00558b35((char *)&param_1,4,1,piVar1);
      *(uint *)(pcVar4 + 8) =
           (uint)CONCAT11((char)param_1,(char)((uint)param_1 >> 8)) << 8 |
           (uint)param_1 >> 0x10 & 0xff;
    }
    pcVar4 = pcVar4 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 2;
  puVar5 = (undefined2 *)((int)this + 0x80);
  do {
    iVar3 = 3;
    do {
      FUN_00558b35((char *)local_4,4,1,piVar1);
      *puVar5 = local_4[0];
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* ==== TDIB.vmt_038 @ 00457138 ==== 
 * signature: undefined __register TDIB.vmt_038(int * param_1, HPALETTE param_2)
 * body: 00457138-00457193
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_038(int *param_1,HPALETTE param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_804 [256];
  tagPALETTEENTRY local_404 [256];
  
  bVar4 = 0;
  GetPaletteEntries(param_2,0,0x100,local_404);
  DeleteObject(param_2);
  FUN_00454ca8(local_404,local_804);
  puVar2 = local_804;
  puVar3 = (uint *)(param_1 + 0x25);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00457298(param_1);
  return;
}



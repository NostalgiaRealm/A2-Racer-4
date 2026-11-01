
/* ==== TIconImage.vmt_000 @ 0041c89c ==== 
 * signature: undefined TIconImage.vmt_000(void)
 * body: 0041c89c-0041c8b2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIconImage_vmt_000(int param_1)

{
  if (*(HICON *)(param_1 + 8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



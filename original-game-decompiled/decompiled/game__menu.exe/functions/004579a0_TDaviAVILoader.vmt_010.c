
/* ==== TDaviAVILoader.vmt_010 @ 004579a0 ==== 
 * signature: undefined TDaviAVILoader.vmt_010(void)
 * body: 004579a0-004579f5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAVILoader_vmt_010(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    AVIStreamGetFrameClose();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    AVIFileRelease();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  AVIFileExit();
  return;
}



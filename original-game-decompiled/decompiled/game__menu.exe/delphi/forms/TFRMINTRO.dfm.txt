object frmIntro: TfrmIntro
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'frmIntro'
  ClientHeight = 573
  ClientWidth = 792
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnKeyDown = FormKeyDown
  OnMouseDown = FormMouseDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object MenuIntro: TMediaPlayer
    Left = 120
    Top = 168
    Width = 253
    Height = 30
    Visible = False
    TabOrder = 0
    OnNotify = MenuIntroNotify
  end
end

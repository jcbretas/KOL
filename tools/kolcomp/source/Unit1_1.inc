{ KOL MCK } // Do not remove this line!
const _TabControl1_Tab0 = 0;
const _TabControl1_Tab1 = 1;
const _TabControl1_Tab2 = 2;
const _TabControl1_Tab5 = 3;
const _TabControl1_Tab6 = 4;
const _TabControl1_Tab3 = 5;
const _TabControl1_Tab4 = 6;
const _TabControl1_Tab7 = 7;

procedure NewForm1( var Result: PForm1; AParent: PControl );
begin

  New( Result, Create );
  Result.Form := NewForm( AParent, '�������� ������� KOL ���������� (12.11.2002)' ).SetPosition( 71, 66 ).SetSize( 665, 457 ).TabulateEx;
  Applet :=  Result.Form;
  Result.Form.Add2AutoFree( Result );
    Result.Form.Font.FontHeight := 8;

    Result.OpenDirDialog1 := NewOpenDirDialog( '�������� ������� ���� ��������� ������', [  ] );
  Result.Form.Add2AutoFree( Result.OpenDirDialog1 );

    Result.OpenDialog1 := NewOpenSaveDialog( '', '', [  ] );
      Result.OpenDialog1.Filter := '*.bmp|*.bmp|*.*|*.*';
  Result.Form.Add2AutoFree( Result.OpenDialog1 );
    // Result.TabControl1.TabOrder = 0
    Result.TabControl1 := NewTabControl( Result.Form, [ '���������', 'KOL Control', 'MCK Control', 'KOL Obj', 'MCK Obj', '����� Delphi5', '����� Delphi6', '���������� � ��������' ], [  ], nil, 0 ).SetAlign ( caClient );
    Result.TabControl1.TabStop := FALSE;
    // Result.TabControl1.Pages[ 0 ].TabOrder = 0
    // Result.Label14.TabOrder = -1
        Result.Label14 := NewLabel( Result.TabControl1.Pages[ 0 ], 'KOLControl - ��� ���������� ��������, � KOLObj - ��� �� ���������� ��������.' ).SetPosition( 16, 8 ).SetSize( 609, 0 );
    Result.Label14.Font.FontName := 'FixedSys';
    // Result.Label17.TabOrder = -1
        Result.Label17 := NewLabel( Result.TabControl1.Pages[ 0 ], '��������� ���������� ������ �������� ����� ����. ����������� (_KC_, � �� _kc_).' ).SetPosition( 8, 360 ).SetSize( 633, 0 );
    Result.Label17.Font.FontName := 'FixedSys';
    // Result.Label13.TabOrder = -1
        Result.Label13 := NewLabel( Result.TabControl1.Pages[ 0 ], '* - ��� KOLObj - ���� ������� � ������� ����. �����������, �� �������.' ).SetPosition( 8, 320 ).SetSize( 561, 0 );
    Result.Label13.Font.FontName := 'FixedSys';
    // Result.Label15.TabOrder = -1
        Result.Label15 := NewLabel( Result.TabControl1.Pages[ 0 ], 'KOL & MCK' ).SetPosition( 456, 48 ).SetSize( 185, 33 );
    Result.Label15.Font.FontStyle := [ fsBold ];
    Result.Label15.Font.FontHeight := 38;
    // Result.GroupBox1.TabOrder = 0
        Result.GroupBox1 := NewGroupBox( Result.TabControl1.Pages[ 0 ], 'KOL ����' ).SetPosition( 0, 32 ).SetSize( 449, 121 );
    Result.GroupBox1.TabStop := FALSE;
    // Result.Label3.TabOrder = -1
          Result.Label3 := NewLabel( Result.GroupBox1, '���������� �������: WndProc' ).SetPosition( 8, 86 ).SetSize( 217, 0 );
    Result.Label3.Font.FontName := 'FixedSys';
    Result.Label3.VerticalAlign := vaCenter;
    // Result.Label7.TabOrder = -1
          Result.Label7 := NewLabel( Result.GroupBox1, '������ ��� ����������: T' ).SetPosition( 8, 56 ).SetSize( 193, 0 );
    Result.Label7.Font.FontName := 'FixedSys';
    Result.Label7.VerticalAlign := vaCenter;
    // Result.Label4.TabOrder = -1
          Result.Label4 := NewLabel( Result.GroupBox1, '- _KC_' ).SetPosition( 376, 24 ).SetSize( 49, 0 );
    Result.Label4.Font.FontName := 'FixedSys';
    Result.Label4.VerticalAlign := vaCenter;
    // Result.Label6.TabOrder = -1
          Result.Label6 := NewLabel( Result.GroupBox1, '- _WP_ *' ).SetPosition( 376, 86 ).SetSize( 65, 0 );
    Result.Label6.Font.FontName := 'FixedSys';
    Result.Label6.VerticalAlign := vaCenter;
    // Result.Label1.TabOrder = -1
          Result.Label1 := NewLabel( Result.GroupBox1, '�������� �������: TKOL' ).SetPosition( 8, 24 ).SetSize( 177, 0 );
    Result.Label1.Font.FontName := 'FixedSys';
    Result.Label1.VerticalAlign := vaCenter;
    // Result.Label8.TabOrder = -1
          Result.Label8 := NewLabel( Result.GroupBox1, '- _CD_ *' ).SetPosition( 376, 56 ).SetSize( 65, 0 );
    Result.Label8.Font.FontName := 'FixedSys';
    Result.Label8.VerticalAlign := vaCenter;
    // Result.eComp.TabOrder = 0
          Result.eComp := NewEditBox( Result.GroupBox1, [  ] ).SetPosition( 184, 24 ).SetSize( 185, 0 );
    Result.eComp.Color := clWindow;
    Result.eComp.Font.FontName := 'FixedSys';
          Result.eComp.Text := 'MyComp';
    // Result.eData.TabOrder = 1
          Result.eData := NewEditBox( Result.GroupBox1, [  ] ).SetPosition( 200, 56 ).SetSize( 169, 0 );
    Result.eData.Color := clWindow;
    Result.eData.Font.FontName := 'FixedSys';
          Result.eData.Text := 'CompData';
    // Result.eWndProc.TabOrder = 2
          Result.eWndProc := NewEditBox( Result.GroupBox1, [  ] ).SetPosition( 224, 86 ).SetSize( 145, 0 );
    Result.eWndProc.Color := clWindow;
    Result.eWndProc.Font.FontName := 'FixedSys';
          Result.eWndProc.Text := 'Comp';
    // Result.GroupBox2.TabOrder = 1
        Result.GroupBox2 := NewGroupBox( Result.TabControl1.Pages[ 0 ], 'MCK ����' ).SetPosition( 0, 160 ).SetSize( 449, 89 );
    Result.GroupBox2.TabStop := FALSE;
    // Result.Label10.TabOrder = -1
          Result.Label10 := NewLabel( Result.GroupBox2, '- _PC_ *' ).SetPosition( 376, 16 ).SetSize( 65, 0 );
    Result.Label10.Font.FontName := 'FixedSys';
    Result.Label10.VerticalAlign := vaCenter;
    // Result.Label5.TabOrder = -1
          Result.Label5 := NewLabel( Result.GroupBox2, '- _PP_' ).SetPosition( 376, 51 ).SetSize( 49, 0 );
    Result.Label5.Font.FontName := 'FixedSys';
    Result.Label5.VerticalAlign := vaCenter;
    // Result.Label2.TabOrder = -1
          Result.Label2 := NewLabel( Result.GroupBox2, '�������� �������: KOL' ).SetPosition( 8, 51 ).SetSize( 177, 0 );
    Result.Label2.Font.FontName := 'FixedSys';
    Result.Label2.VerticalAlign := vaCenter;
    // Result.Label9.TabOrder = -1
          Result.Label9 := NewLabel( Result.GroupBox2, '���������� ��: TKOL' ).SetPosition( 8, 19 ).SetSize( 153, 0 );
    Result.Label9.Font.FontName := 'FixedSys';
    Result.Label9.VerticalAlign := vaCenter;
    // Result.eSender.TabOrder = 0
          Result.eSender := NewEditBox( Result.GroupBox2, [  ] ).SetPosition( 160, 19 ).SetSize( 209, 0 );
    Result.eSender.Color := clWindow;
    Result.eSender.Font.FontName := 'FixedSys';
          Result.eSender.Text := 'Control';
    // Result.ePalette.TabOrder = 1
          Result.ePalette := NewEditBox( Result.GroupBox2, [  ] ).SetPosition( 184, 51 ).SetSize( 185, 0 );
    Result.ePalette.Color := clWindow;
    Result.ePalette.Font.FontName := 'FixedSys';
          Result.ePalette.Text := 'Dialogs';
    // Result.GroupBox3.TabOrder = 2
        Result.GroupBox3 := NewGroupBox( Result.TabControl1.Pages[ 0 ], '����� �������' ).SetPosition( 0, 256 ).SetSize( 449, 49 );
    Result.GroupBox3.TabStop := FALSE;
    // Result.Label11.TabOrder = -1
          Result.Label11 := NewLabel( Result.GroupBox3, '�������� ������:' ).SetPosition( 8, 16 ).SetSize( 129, 0 );
    Result.Label11.Font.FontName := 'FixedSys';
    Result.Label11.VerticalAlign := vaCenter;
    // Result.Label12.TabOrder = -1
          Result.Label12 := NewLabel( Result.GroupBox3, '- _PD_' ).SetPosition( 376, 16 ).SetSize( 49, 0 );
    Result.Label12.Font.FontName := 'FixedSys';
    // Result.eDiscr.TabOrder = 0
          Result.eDiscr := NewEditBox( Result.GroupBox3, [  ] ).SetPosition( 144, 16 ).SetSize( 225, 0 );
    Result.eDiscr.Color := clWindow;
    Result.eDiscr.Font.FontName := 'FixedSys';
          Result.eDiscr.Text := 'KOLMyComp';
    // Result.GroupBox5.TabOrder = 3
        Result.GroupBox5 := NewGroupBox( Result.TabControl1.Pages[ 0 ], '������ �������' ).SetPosition( 456, 96 ).SetSize( 185, 57 );
    Result.GroupBox5.TabStop := FALSE;
    // Result.bSelBmp.TabOrder = 0
          Result.bSelBmp := NewButton( Result.GroupBox5, 'Bmp ���� 24x24' ).SetPosition( 8, 21 ).SetSize( 129, 0 );
      Result.bSelBmp.OnClick := Result.bSelBmpClick;
    // Result.Panel1.TabOrder = 1
          Result.Panel1 := NewPanel( Result.GroupBox5, esLowered ).SetPosition( 144, 16 ).SetSize( 30, 30 );
    // Result.PaintBox1.TabOrder = 0
            Result.PaintBox1 := NewPaintBox( Result.Panel1 ).SetAlign ( caClient );
            Result.PaintBox1.Visible := False;
      Result.PaintBox1.OnPaint := Result.PaintBox1Paint;
    // Result.GroupBox4.TabOrder = 4
        Result.GroupBox4 := NewGroupBox( Result.TabControl1.Pages[ 0 ], '�������' ).SetPosition( 456, 160 ).SetSize( 185, 73 );
    Result.GroupBox4.TabStop := FALSE;
    // Result.rbCtl.TabOrder = 0
          Result.rbCtl := NewRadioBox( Result.GroupBox4, 'KOLControl' ).SetPosition( 16, 16 ).SetSize( 105, 0 );
    Result.rbCtl.Font.FontName := 'FixedSys';
          Result.rbCtl.SetRadioChecked;
    // Result.rbObj.TabOrder = 1
          Result.rbObj := NewRadioBox( Result.GroupBox4, 'KOLObj' ).SetPosition( 16, 40 ).SetSize( 73, 0 );
    Result.rbObj.Font.FontName := 'FixedSys';
    // Result.bSelPath.TabOrder = 5
        Result.bSelPath := NewButton( Result.TabControl1.Pages[ 0 ], '������� �������' ).SetPosition( 464, 251 ).SetSize( 169, 0 );
      Result.bSelPath.OnClick := Result.bSelPathClick;
    // Result.bCrPat.TabOrder = 6
        Result.bCrPat := NewButton( Result.TabControl1.Pages[ 0 ], '������� ������' ).SetPosition( 464, 283 ).SetSize( 169, 0 );
      Result.bCrPat.OnClick := Result.bCrPatClick;
    // Result.TabControl1.Pages[ 1 ].TabOrder = 1
    // Result.mKOLCtl.TabOrder = 0
        Result.mKOLCtl := NewEditBox( Result.TabControl1.Pages[ 1 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mKOLCtl.Color := clWindow;
    Result.mKOLCtl.Font.FontHeight := 0;
    Result.mKOLCtl.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 2 ].TabOrder = 2
    // Result.mMCKCtl.TabOrder = 0
        Result.mMCKCtl := NewEditBox( Result.TabControl1.Pages[ 2 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mMCKCtl.Color := clWindow;
    Result.mMCKCtl.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 3 ].TabOrder = 3
    // Result.mKOLObj.TabOrder = 0
        Result.mKOLObj := NewEditBox( Result.TabControl1.Pages[ 3 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mKOLObj.Color := clWindow;
    Result.mKOLObj.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 4 ].TabOrder = 4
    // Result.mMCKObj.TabOrder = 0
        Result.mMCKObj := NewEditBox( Result.TabControl1.Pages[ 4 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mMCKObj.Color := clWindow;
    Result.mMCKObj.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 5 ].TabOrder = 5
    // Result.mPD5.TabOrder = 0
        Result.mPD5 := NewEditBox( Result.TabControl1.Pages[ 5 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mPD5.Color := clWindow;
    Result.mPD5.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 6 ].TabOrder = 6
    // Result.mPD6.TabOrder = 0
        Result.mPD6 := NewEditBox( Result.TabControl1.Pages[ 6 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mPD6.Color := clWindow;
    Result.mPD6.Font.FontName := 'FixedSys';
    // Result.TabControl1.Pages[ 7 ].TabOrder = 7
    // Result.mInfo.TabOrder = 0
        Result.mInfo := NewEditBox( Result.TabControl1.Pages[ 7 ], [ eoMultiline ] ).SetAlign ( caClient );
    Result.mInfo.Color := clWindow;
    Result.mInfo.Font.FontName := 'FixedSys';
      Result.OpenDirDialog1.WndOwner := Result.Form.GetWindowHandle;
      Result.OpenDialog1.WndOwner := Result.Form.GetWindowHandle;
    Result.Form.CenterOnParent;
    Result.KOLForm1FormCreate( Result );

end;

